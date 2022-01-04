mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))

ROOT_DIR := $(dir $(mkfile_path))
OUT_DIR := $(ROOT_DIR)out/
TC_DIR := $(OUT_DIR)tc/

toolchain: tools/tc-build/build-binutils.py
	tools/tc-build/build-llvm.py --build-folder=$(TC_DIR)/build --install-folder=$(TC_DIR)/install

clean:
	rm -rf $(OUT_DIR)
