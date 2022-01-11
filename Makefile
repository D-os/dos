mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))

ROOT_DIR := $(realpath $(dir $(mkfile_path)))
OUT_DIR := $(ROOT_DIR)/out
TC_DIR := $(OUT_DIR)/tc
BUILD_DIR := $(OUT_DIR)/build
SYSROOT_DIR := $(OUT_DIR)/sysroot

LLVM_TARGET_TAG := llvmorg-11.1.0

.PHONY: toolchain samurai bzImage clean

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

$(TC_DIR)/target/bin: $(TC_DIR)/host/bin
	cd external/llvm-project && git reset --hard $(LLVM_TARGET_TAG) \
		&& patch -N -p1 < ../../tools/clang-support-expanding-target-triple-in-sysroot-pat.patch
	mkdir -p $(TC_DIR)/build/target
	cd $(TC_DIR)/build/target && ln -sf ../../../../tools/Makefile.litecross ./Makefile
	cd $(TC_DIR)/build/target && PATH=$(TC_DIR)/host/bin:${PATH} CC=clang CXX=clang++ $(MAKE) \
		LLVM_CCACHE_BUILD=ON \
		LLVM_CONFIG=CLANG_VENDOR=D/os \
		LLVM_VER=$(LLVM_TARGET_TAG:llvmorg-%=%) \
		LINUX_SRCDIR=$(ROOT_DIR)/external/kernel-headers \
		LLVM_SRCDIR=$(ROOT_DIR)/external/llvm-project \
		MUSL_SRCDIR=$(ROOT_DIR)/external/musl \
		OUTPUT=$(TC_DIR)/target all install
	git submodule update --force external/llvm-project

samurai: $(TC_DIR)/host/bin/samu

$(TC_DIR)/host/bin/samu: $(TC_DIR)/host/bin
	PATH=$(TC_DIR)/host/bin:${PATH} CC=clang $(MAKE) -j \
		-C external/samurai PREFIX=/ DESTDIR=$(TC_DIR)/host MANDIR=/man
	PATH=$(TC_DIR)/host/bin:${PATH} CC=clang $(MAKE) \
		-C external/samurai PREFIX=/ DESTDIR=$(TC_DIR)/host MANDIR=/man install clean
	ln -sf ./samu $(TC_DIR)/host/bin/ninja

musl:
	rm -rf $(BUILD_DIR)/musl $(SYSROOT_DIR)
	mkdir -p $(BUILD_DIR)/musl
	cd $(BUILD_DIR)/musl && CC=$(TC_DIR)/target/bin/x86_64-linux-musl-clang ../../../../external/musl/configure --prefix=/ --disable-static
	cd $(BUILD_DIR)/musl && DESTDIR=$(SYSROOT_DIR) $(MAKE) -j install

bzImage: $(BUILD_DIR)/linux/arch/x86/boot/bzImage

$(BUILD_DIR)/linux/arch/x86/boot/bzImage: external/linux/Makefile $(TC_DIR)/host/bin
	PATH=$(TC_DIR)/host/bin:${PATH} $(MAKE) -j -C external/linux LLVM=1 ARCH=x86_64 O=$(BUILD_DIR)/linux defconfig bzImage

