#!/bin/sh
#
## Copy modules given on stdin to staging directory.
## usage: tools/copy-initramfs-modules.sh MODULES_LIST KERNEL_VERSION MODULES_STAGING_DIR

MODULES_LIST=$1
KERNEL_VERSION=$2
MODULES_STAGING_DIR=$3

if [ $# -ne 3 ]; then
  sed -n '/^## /{s/^## //p}' "$0"
  exit 1
fi

set -e
KERNEL_DIR=out/sysroot/lib/modules/$KERNEL_VERSION

mkdir -p "$MODULES_STAGING_DIR"
cp "$KERNEL_DIR"/modules.{order,builtin} "$MODULES_STAGING_DIR"

copy_dependencies() {
  shift
  while [ -n "$1" ]; do
    copy_module "$KERNEL_DIR/$1"
    shift
  done
}

copy_module() {
  local MODULE_PATH="$1"
  local MODULE_FILE="${MODULE_PATH##*/}"

  if [ ! -e "$MODULES_STAGING_DIR/$MODULE_FILE" ]; then
    cp "$MODULE_PATH" "$MODULES_STAGING_DIR"

    MODULE_BASE_PATH=${MODULE_PATH#"$KERNEL_DIR"/}
    MODULE_DEPENDENCIES=$(grep "$MODULE_BASE_PATH": "$KERNEL_DIR"/modules.dep)
    if [ -n "$MODULE_DEPENDENCIES" ]; then
      # shellcheck disable=SC2086
      copy_dependencies $MODULE_DEPENDENCIES
    fi
  fi
}

while read -r MODULE; do
  MODULE_PATH=$(find "$KERNEL_DIR" -name "$MODULE")
  copy_module "$MODULE_PATH"
done <"$MODULES_LIST"

touch "$MODULES_STAGING_DIR"
