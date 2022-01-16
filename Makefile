mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))

ROOT_DIR := $(realpath $(dir $(mkfile_path)))
OUT_DIR := $(ROOT_DIR)/out
TC_DIR := $(OUT_DIR)/tc
BUILD_DIR := $(OUT_DIR)/build
SYSROOT_DIR := $(OUT_DIR)/sysroot

LLVM_TARGET_TAG := llvmorg-11.1.0

.PHONY: toolchain toolchain-host toolchain-target mold samurai kati bzImage clean

toolchain: toolchain-host toolchain-target samurai kati

clean:
	rm -rf $(OUT_DIR)

toolchain-host: $(TC_DIR)/host/bin

$(TC_DIR)/host/bin: tools/tc-build/build-llvm.py
	git submodule update --force external/llvm-project
	tools/tc-build/build-llvm.py --show-build-commands --targets="AArch64;X86" \
		--llvm-folder=$(ROOT_DIR)/external/llvm-project --no-update \
		--build-folder=$(TC_DIR)/build --install-folder=$(TC_DIR)/host \
		--clang-vendor=D/os --build-stage1-only --install-stage1-only

toolchain-target: $(TC_DIR)/target/bin

$(TC_DIR)/target/bin: $(TC_DIR)/host/bin $(TC_DIR)/host/bin/mold
	cd external/llvm-project && git reset --hard $(LLVM_TARGET_TAG) \
		&& patch -N -p1 < ../../tools/clang-support-expanding-target-triple-in-sysroot-pat.patch
	mkdir -p $(TC_DIR)/build/target
	cd $(TC_DIR)/build/target && ln -sf ../../../../tools/Makefile.litecross ./Makefile
	cd $(TC_DIR)/build/target && PATH=$(TC_DIR)/host/bin:${PATH} CC=clang CXX=clang++ $(MAKE) \
		LLVM_CONFIG='-DCLANG_VENDOR=D/os -DLLVM_CCACHE_BUILD=ON' \
		LLVM_VER=$(LLVM_TARGET_TAG:llvmorg-%=%) \
		LINUX_SRCDIR=$(ROOT_DIR)/external/kernel-headers \
		LLVM_SRCDIR=$(ROOT_DIR)/external/llvm-project \
		MUSL_SRCDIR=$(ROOT_DIR)/external/musl \
		OUTPUT=$(TC_DIR)/target all install
	git submodule update --force external/llvm-project

mold: $(TC_DIR)/host/bin/mold

$(TC_DIR)/host/bin/mold: $(TC_DIR)/host/bin
	PATH=$(TC_DIR)/host/bin:${PATH} CXX=clang++ $(MAKE) -j \
		-C external/mold PREFIX=/ DESTDIR=$(TC_DIR)/host MANDIR=/man
	PATH=$(TC_DIR)/host/bin:${PATH} CXX=clang++ $(MAKE) \
		-C external/mold PREFIX=/ DESTDIR=$(TC_DIR)/host MANDIR=/man install clean

samurai: $(TC_DIR)/host/bin/samu

$(TC_DIR)/host/bin/samu: $(TC_DIR)/host/bin
	PATH=$(TC_DIR)/host/bin:${PATH} CC=clang $(MAKE) -j \
		-C external/samurai PREFIX=/ DESTDIR=$(TC_DIR)/host MANDIR=/man
	PATH=$(TC_DIR)/host/bin:${PATH} CC=clang $(MAKE) \
		-C external/samurai PREFIX=/ DESTDIR=$(TC_DIR)/host MANDIR=/man install clean
	ln -sf ./samu $(TC_DIR)/host/bin/ninja

kati: $(TC_DIR)/host/bin/ckati

$(TC_DIR)/host/bin/ckati: $(TC_DIR)/host/bin
	PATH=$(TC_DIR)/host/bin:${PATH} CXX=clang++ $(MAKE) -j \
		KATI_INTERMEDIATES_PATH=$(TC_DIR)/build/kati KATI_BIN_PATH=$(TC_DIR)/host/bin \
		-C external/kati -f Makefile.ckati $(TC_DIR)/host/bin/ckati
	ln -sf ./ckati $(TC_DIR)/host/bin/kati

libcxx:
	rm -rf out/build/libcxx
	PATH=$(TC_DIR)/target/bin:${PATH} cmake -G Ninja \
		-S external/llvm-project/runtimes -B out/build/libcxx \
		-DCMAKE_C_COMPILER=x86_64-linux-musl-clang -DCMAKE_CXX_COMPILER=x86_64-linux-musl-clang++ \
		-DLLVM_ENABLE_RUNTIMES="libcxx;libcxxabi;libunwind" \
		-DCMAKE_BUILD_TYPE=RelWithDebInfo -DCMAKE_INSTALL_PREFIX=out/sysroot \
		-DLIBCXX_ENABLE_SHARED=YES -DLIBCXX_ENABLE_STATIC=NO -DLIBCXX_ENABLE_EXPERIMENTAL_LIBRARY=NO

bzImage: $(BUILD_DIR)/linux/arch/x86/boot/bzImage

$(BUILD_DIR)/linux/arch/x86/boot/bzImage: external/linux/Makefile $(TC_DIR)/host/bin
	PATH=$(TC_DIR)/host/bin:${PATH} $(MAKE) -j -C external/linux LLVM=1 ARCH=x86_64 O=$(BUILD_DIR)/linux defconfig bzImage

