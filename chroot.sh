#!/bin/sh
#
## chroot into a rootfs for the same architecture
## usage: sudo ./chroot.sh ROOTDIR [COMMAND]

DIR=$1
CMD=$2

if [ ! -d "$DIR" ]; then
  sed -n '/^## /{s/^## //p}' $0
  exit 1
fi

echo chrooting into $DIR
mkdir -p $DIR/proc
mkdir -p $DIR/sys
mkdir -p $DIR/dev
mkdir -p $DIR/mnt
mkdir -p $DIR/debug_ramdisk
mkdir -p $DIR/second_stage_resources

mkdir -p $DIR/etc
cp /etc/resolv.conf $DIR/etc

chroot $DIR ${CMD:=/bin/init}

sleep 1s
grep -o "[^ ]*$DIR[^ ]*" /proc/self/mountinfo | sort -r | xargs umount -R

rm $DIR/etc/resolv.conf
