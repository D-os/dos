mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))

ROOT_DIR := $(realpath $(dir $(mkfile_path)))
OUT_DIR := $(ROOT_DIR)/out
TC_DIR := $(OUT_DIR)/tc
BUILD_DIR := $(OUT_DIR)/build
SYSROOT_DIR := $(OUT_DIR)/sysroot

.PHONY: toolchain toolchain-host toolchain-target mold samurai kati bzImage compdb clean

toolchain: toolchain-host toolchain-target samurai kati

sysroot: $(SYSROOT_DIR) libc kernel-headers libcxx

clean:
	rm -rf $(OUT_DIR)

compdb:
	ninja -t compdb > build/compile_commands.json

toolchain-host: | $(TC_DIR)/host/bin

$(TC_DIR)/host/bin: tools/tc-build/build-llvm.py
	tools/tc-build/build-llvm.py --show-build-commands --targets="AArch64;X86" \
		--llvm-folder=$(ROOT_DIR)/external/llvm-project --no-update \
		--build-folder=$(TC_DIR)/build --install-folder=$(TC_DIR)/host \
		--clang-vendor=D/os --build-stage1-only --install-stage1-only

toolchain-target: | $(TC_DIR)/target/bin

$(TC_DIR)/target/bin: | $(TC_DIR)/host/bin/mold $(TC_DIR)/host/bin/ckati $(TC_DIR)/host/bin/samu
	mkdir -p $(TC_DIR)/build/target
	cd $(TC_DIR)/build/target && ln -sf ../../../../tools/Makefile.litecross ./Makefile
	cd $(TC_DIR)/build/target && PATH=$(TC_DIR)/host/bin:${PATH} CC=clang CXX=clang++ $(MAKE) \
		LLVM_CONFIG='-DCLANG_VENDOR=D/os -DLLVM_CCACHE_BUILD=ON' \
		LLVM_VER='14.0.0' \
		LINUX_SRCDIR=$(ROOT_DIR)/external/kernel-headers \
		LLVM_SRCDIR=$(ROOT_DIR)/external/llvm-project \
		MUSL_SRCDIR=$(ROOT_DIR)/external/musl \
		OUTPUT=$(TC_DIR)/target all install

mold: $(TC_DIR)/host/bin/mold

$(TC_DIR)/host/bin/mold: | $(TC_DIR)/host/bin
	PATH=$(TC_DIR)/host/bin:${PATH} CXX=clang++ $(MAKE) -j \
		-C external/mold PREFIX=/ DESTDIR=$(TC_DIR)/host MANDIR=/man
	PATH=$(TC_DIR)/host/bin:${PATH} CXX=clang++ $(MAKE) \
		-C external/mold PREFIX=/ DESTDIR=$(TC_DIR)/host MANDIR=/man install clean

samurai: $(TC_DIR)/host/bin/samu

$(TC_DIR)/host/bin/samu: | $(TC_DIR)/host/bin
	PATH=$(TC_DIR)/host/bin:${PATH} CC=clang $(MAKE) -j \
		-C external/samurai PREFIX=/ DESTDIR=$(TC_DIR)/host MANDIR=/man
	PATH=$(TC_DIR)/host/bin:${PATH} CC=clang $(MAKE) \
		-C external/samurai PREFIX=/ DESTDIR=$(TC_DIR)/host MANDIR=/man install clean
	ln -sf ./samu $(TC_DIR)/host/bin/ninja

kati: $(TC_DIR)/host/bin/ckati

$(TC_DIR)/host/bin/ckati: | $(TC_DIR)/host/bin
	PATH=$(TC_DIR)/host/bin:${PATH} CXX=clang++ $(MAKE) -j \
		KATI_INTERMEDIATES_PATH=$(TC_DIR)/build/kati KATI_BIN_PATH=$(TC_DIR)/host/bin \
		-C external/kati -f Makefile.ckati $(TC_DIR)/host/bin/ckati
	ln -sf ./ckati $(TC_DIR)/host/bin/kati

$(SYSROOT_DIR):
	mkdir -p $(SYSROOT_DIR)

libc: $(SYSROOT_DIR)/lib/libc.so

$(SYSROOT_DIR)/lib/libc.so: $(SYSROOT_DIR)
	rm -rf $(BUILD_DIR)/musl
	mkdir -p $(BUILD_DIR)/musl
	cd $(BUILD_DIR)/musl && CC=$(TC_DIR)/target/bin/x86_64-unknown-linux-musl-clang \
		../../../external/musl/configure --prefix=/ --disable-static
	cd $(BUILD_DIR)/musl && DESTDIR=$(SYSROOT_DIR) $(MAKE) -j install

libcxx: $(SYSROOT_DIR)/lib/libc++.so

$(SYSROOT_DIR)/lib/libc++.so: $(SYSROOT_DIR) $(SYSROOT_DIR)/lib/libc.so
	rm -rf $(BUILD_DIR)/libcxx
	PATH=$(TC_DIR)/target/bin:${PATH} cmake -G Ninja \
		--toolchain $(ROOT_DIR)/tools/CMake.toolchain \
		-S external/llvm-project/runtimes -B $(BUILD_DIR)/libcxx \
		-DLLVM_ENABLE_RUNTIMES="libcxx;libcxxabi;libunwind" \
		-DLIBCXX_HAS_MUSL_LIBC=ON -DLLVM_CCACHE_BUILD=ON \
		-DCMAKE_BUILD_TYPE=RelWithDebInfo -DCMAKE_INSTALL_PREFIX=$(SYSROOT_DIR) \
		-DLIBCXX_ENABLE_SHARED=YES -DLIBCXX_ENABLE_STATIC=NO -DLIBCXX_ENABLE_EXPERIMENTAL_LIBRARY=NO
	cd $(BUILD_DIR)/libcxx && PATH=$(TC_DIR)/host/bin:${PATH} ninja install

kernel-headers: $(SYSROOT_DIR)/include/linux

$(SYSROOT_DIR)/include/linux:
	$(MAKE) -C external/kernel-headers ARCH=x86_64 prefix= DESTDIR=$(SYSROOT_DIR) install

kernel: $(BUILD_DIR)/linux/arch/x86/boot/bzImage

$(BUILD_DIR)/linux/arch/x86/boot/bzImage: external/linux/Makefile $(TC_DIR)/host/bin build/linux/config
	mkdir -p $(BUILD_DIR)/linux
	cp -f build/linux/config $(BUILD_DIR)/linux/.config
	PATH=$(TC_DIR)/host/bin:${PATH} $(MAKE) -j`nproc` \
		-C external/linux LLVM=1 ARCH=x86_64 O=$(BUILD_DIR)/linux olddefconfig kvm_guest.config bzImage
	diff -u build/linux/config $(BUILD_DIR)/linux/.config || :

kernel_modules: $(SYSROOT_DIR)/lib/modules

$(SYSROOT_DIR)/lib/modules: $(BUILD_DIR)/linux/arch/x86/boot/bzImage
	PATH=$(TC_DIR)/host/bin:${PATH} $(MAKE) -j`nproc` \
		-C external/linux LLVM=1 ARCH=x86_64 O=$(BUILD_DIR)/linux modules
	PATH=$(TC_DIR)/host/bin:${PATH} $(MAKE) \
		-C external/linux LLVM=1 ARCH=x86_64 O=$(BUILD_DIR)/linux \
		INSTALL_MOD_PATH=$(SYSROOT_DIR) INSTALL_MOD_STRIP=1 modules_install
	rm $(SYSROOT_DIR)/lib/modules/*/{source,build}
