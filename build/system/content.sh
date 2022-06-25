#!/bin/sh
set -e

# first check whether all files mentioned in content.d are installed
make -s -f build/system/content.d || exit 1

# mount with fakeroot and run fixes
mkdir -p out/mnt
fuse2fs out/system.img out/mnt -o fakeroot,rw || exit 1

chown -R 0:0 out/mnt/*
chmod 4755 out/mnt/system/bin/su

mkdir -p out/mnt/config

mkdir -p out/mnt/users/2000
chown 2000 out/mnt/users/2000
chmod 0700 out/mnt/users/2000

# finally sync and unmount
sync
fusermount -u -z out/mnt
