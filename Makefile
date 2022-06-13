mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))

ROOT_DIR := $(realpath $(dir $(mkfile_path)))
OUT_DIR := $(ROOT_DIR)/out

BUILD_DIR := $(OUT_DIR)/build

TARGET := x86_64-unknown-linux-musl
SYSROOT_DIR := $(OUT_DIR)/target/$(TARGET)

.PHONY: toolchain sysroot clean compdb toolchain-host toolchain-target mold samurai kati libc libcxx llvm kernel-headers kernel kernel_modules

toolchain: toolchain-host toolchain-target yasm samurai kati

sysroot: $(SYSROOT_DIR) kernel-headers libc libcxx llvm

clean:
	rm -rf $(OUT_DIR)

compdb:
	ninja -t compdb > build/compile_commands.json

toolchain-host: | $(OUT_DIR)/host/bin

$(OUT_DIR)/host/bin: tools/tc-build/build-llvm.py
	tools/tc-build/build-llvm.py --show-build-commands --targets="AArch64;X86" \
		--llvm-folder=$(ROOT_DIR)/external/llvm-project --no-update \
		--build-folder=$(BUILD_DIR)/_host --install-folder=$(OUT_DIR)/host \
		--clang-vendor=D/os --build-stage1-only --install-stage1-only

toolchain-target: | $(OUT_DIR)/target/bin

$(OUT_DIR)/target/bin: | $(OUT_DIR)/host/bin/mold $(OUT_DIR)/host/bin/ckati $(OUT_DIR)/host/bin/samu
	mkdir -p $(BUILD_DIR)/_host/tc
	cd $(BUILD_DIR)/_host/tc && ln -sf ../../../../tools/Makefile.litecross ./Makefile
	cd $(BUILD_DIR)/_host/tc && PATH=$(OUT_DIR)/host/bin:${PATH} CC=clang CXX=clang++ $(MAKE) \
		LLVM_CONFIG='-DCLANG_VENDOR=D/os -DLLVM_CCACHE_BUILD=ON' \
		LLVM_VER='15.0.0' \
		LINUX_SRCDIR=$(ROOT_DIR)/external/kernel-headers \
		LLVM_SRCDIR=$(ROOT_DIR)/external/llvm-project \
		MUSL_SRCDIR=$(ROOT_DIR)/external/musl \
		OUTPUT=$(OUT_DIR)/target all install

mold: $(OUT_DIR)/host/bin/mold

$(OUT_DIR)/host/bin/mold: | $(OUT_DIR)/host/bin
	PATH=$(OUT_DIR)/host/bin:${PATH} CXX=clang++ $(MAKE) -j \
		-C external/mold PREFIX=/ DESTDIR=$(OUT_DIR)/host MANDIR=/man
	PATH=$(OUT_DIR)/host/bin:${PATH} CXX=clang++ $(MAKE) \
		-C external/mold PREFIX=/ DESTDIR=$(OUT_DIR)/host MANDIR=/man install clean

samurai: $(OUT_DIR)/host/bin/samu

$(OUT_DIR)/host/bin/samu: | $(OUT_DIR)/host/bin
	PATH=$(OUT_DIR)/host/bin:${PATH} CC=clang $(MAKE) -j \
		-C external/samurai PREFIX=/ DESTDIR=$(OUT_DIR)/host MANDIR=/man
	PATH=$(OUT_DIR)/host/bin:${PATH} CC=clang $(MAKE) \
		-C external/samurai PREFIX=/ DESTDIR=$(OUT_DIR)/host MANDIR=/man install clean
	ln -sf ./samu $(OUT_DIR)/host/bin/ninja

kati: $(OUT_DIR)/host/bin/ckati

$(OUT_DIR)/host/bin/ckati: | $(OUT_DIR)/host/bin
	PATH=$(OUT_DIR)/host/bin:${PATH} CXX=clang++ $(MAKE) -j \
		KATI_INTERMEDIATES_PATH=$(BUILD_DIR)/_host/kati KATI_BIN_PATH=$(OUT_DIR)/host/bin \
		-C external/kati -f Makefile.ckati $(OUT_DIR)/host/bin/ckati
	ln -sf ./ckati $(OUT_DIR)/host/bin/kati

yasm: $(OUT_DIR)/host/bin/yasm

$(OUT_DIR)/host/bin/yasm: | $(OUT_DIR)/host/bin
	rm -rf $(BUILD_DIR)/_host/yasm
	PATH=$(OUT_DIR)/host/bin:${PATH} CC=clang CXX=clang++ cmake -G Ninja \
		-S external/yasm -B $(BUILD_DIR)/_host/yasm -Wno-dev \
		-DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=$(OUT_DIR)/host \
		-DCMAKE_INSTALL_RPATH=$(OUT_DIR)/host/lib
	cd $(BUILD_DIR)/_host/yasm && PATH=$(OUT_DIR)/host/bin:${PATH} ninja install

libc: $(SYSROOT_DIR)/lib/libc.so

$(SYSROOT_DIR)/lib/libc.so: | $(SYSROOT_DIR)
	rm -rf $(BUILD_DIR)/musl
	mkdir -p $(BUILD_DIR)/musl
	cd $(BUILD_DIR)/musl && CC=$(OUT_DIR)/target/bin/$(TARGET)-clang \
		../../../external/musl/configure --prefix= --enable-debug
	cd $(BUILD_DIR)/musl && DESTDIR=$(SYSROOT_DIR) $(MAKE) -j install

libcxx: $(SYSROOT_DIR)/lib/libc++.so

$(SYSROOT_DIR)/lib/libc++.so: | $(SYSROOT_DIR)/lib/libc.so
	rm -rf $(BUILD_DIR)/libcxx
	PATH=$(OUT_DIR)/target/bin:${PATH} cmake -G Ninja \
		--toolchain $(ROOT_DIR)/tools/CMake.toolchain \
		-S external/llvm-project/runtimes -B $(BUILD_DIR)/libcxx \
		-DLLVM_ENABLE_RUNTIMES="libcxx;libcxxabi;libunwind" \
		-DLIBCXX_HAS_MUSL_LIBC=ON -DLIBUNWIND_INSTALL_HEADERS=ON \
		-DCMAKE_BUILD_TYPE=RelWithDebInfo -DCMAKE_INSTALL_PREFIX=$(SYSROOT_DIR) \
		-DLIBCXX_ENABLE_SHARED=YES -DLIBCXX_ENABLE_STATIC=NO -DLIBCXX_ENABLE_EXPERIMENTAL_LIBRARY=NO
	cd $(BUILD_DIR)/libcxx && PATH=$(OUT_DIR)/host/bin:${PATH} ninja install

llvm: $(SYSROOT_DIR)/lib/libLLVM.so

$(SYSROOT_DIR)/lib/libLLVM.so: | $(SYSROOT_DIR)/lib/libc++.so
	rm -rf $(BUILD_DIR)/llvm
	PATH=$(OUT_DIR)/target/bin:${PATH} cmake -G Ninja \
		--toolchain $(ROOT_DIR)/tools/CMake.toolchain \
		-S external/llvm-project/llvm -B $(BUILD_DIR)/llvm \
		-DLLVM_ENABLE_PROJECTS="clang;lldb" \
		-DLLVM_INSTALL_BINUTILS_SYMLINKS=ON \
		-DLLVM_TARGETS_TO_BUILD="AArch64;AMDGPU;NVPTX;WebAssembly;X86" \
		-DLLVM_BUILD_LLVM_DYLIB=ON -DLLVM_LINK_LLVM_DYLIB=ON \
		-DLLVM_ENABLE_RTTI=ON -DLLVM_CCACHE_BUILD=ON \
		-DLLDB_ENABLE_PYTHON=0 -DLLDB_ENABLE_LIBEDIT=0 -DLLDB_ENABLE_CURSES=0 -DLLVM_ENABLE_TERMINFO=0 \
		-DCMAKE_BUILD_TYPE=RelWithDebInfo -DCMAKE_INSTALL_PREFIX=$(SYSROOT_DIR) \
		-DLLVM_TABLEGEN=$(OUT_DIR)/host/bin/llvm-tblgen -DLLVM_OPTIMIZED_TABLEGEN=ON
	cd $(BUILD_DIR)/llvm && \
		export LD_LIBRARY_PATH=$(OUT_DIR)/target/clang/lib/x86_64-unknown-linux-gnu && \
		PATH=$(OUT_DIR)/host/bin:${PATH} ninja install-LLVM install-llvm-headers install-lldb install-lldb-server install-liblldb install-clang-cpp

kernel-headers: $(SYSROOT_DIR)/include/linux

$(SYSROOT_DIR)/include/linux:
	$(MAKE) -C external/kernel-headers ARCH=x86_64 prefix= DESTDIR=$(SYSROOT_DIR) install

kernel: $(BUILD_DIR)/linux/arch/x86/boot/bzImage

$(BUILD_DIR)/linux/arch/x86/boot/bzImage: external/linux/Makefile $(OUT_DIR)/host/bin build/linux/config
	mkdir -p $(BUILD_DIR)/linux
	cp -f build/linux/config $(BUILD_DIR)/linux/.config
	PATH=$(OUT_DIR)/host/bin:${PATH} $(MAKE) -j`nproc` \
		-C external/linux LLVM=1 ARCH=x86_64 O=$(BUILD_DIR)/linux olddefconfig kvm_guest.config bzImage
	diff -u build/linux/config $(BUILD_DIR)/linux/.config || :

kernel_modules: $(SYSROOT_DIR)/lib/modules

$(SYSROOT_DIR)/lib/modules: $(BUILD_DIR)/linux/arch/x86/boot/bzImage
	PATH=$(OUT_DIR)/host/bin:${PATH} $(MAKE) -j`nproc` \
		-C external/linux LLVM=1 ARCH=x86_64 O=$(BUILD_DIR)/linux modules
	PATH=$(OUT_DIR)/host/bin:${PATH} $(MAKE) \
		-C external/linux LLVM=1 ARCH=x86_64 O=$(BUILD_DIR)/linux \
		INSTALL_MOD_PATH=$(SYSROOT_DIR) INSTALL_MOD_STRIP=1 modules_install
	rm $(SYSROOT_DIR)/lib/modules/*/{source,build}
