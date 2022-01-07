mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))

ROOT_DIR := $(realpath $(dir $(mkfile_path)))
OUT_DIR := $(ROOT_DIR)/out
TC_DIR := $(OUT_DIR)/tc
BUILD_DIR := $(OUT_DIR)/build
SYSROOT_DIR := $(OUT_DIR)/sysroot

.PHONY: toolchain bzImage clean

clean:
	rm -rf $(OUT_DIR)

toolchain: $(TC_DIR)/install/bin

$(TC_DIR)/install/bin: tools/tc-build/build-llvm.py
	tools/tc-build/build-llvm.py --show-build-commands --targets=X86 --llvm-folder=$(ROOT_DIR)/external/llvm-project --no-update --build-folder=$(TC_DIR)/build --install-folder=$(TC_DIR)/install --clang-vendor=""

musl:
	rm -rf $(BUILD_DIR)/musl $(SYSROOT_DIR)
	mkdir -p $(BUILD_DIR)/musl
	cd $(BUILD_DIR)/musl && CC=clang ../../../external/musl/configure --prefix=/usr --disable-static
	cd $(BUILD_DIR)/musl && DESTDIR=$(SYSROOT_DIR) make -j install

bzImage: $(BUILD_DIR)/linux/arch/x86/boot/bzImage

$(BUILD_DIR)/linux/arch/x86/boot/bzImage: external/linux/Makefile $(TC_DIR)/install/bin
	PATH=$(TC_DIR)/install/bin:${PATH} $(MAKE) -j -C external/linux LLVM=1 ARCH=x86_64 O=$(BUILD_DIR)/linux defconfig bzImage

