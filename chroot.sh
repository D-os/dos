#!/bin/sh
#
## chroot into a rootfs for the same architecture
## usage: sudo ./chroot.sh ROOTDIR

if [ ! -d "$1" ]; then
    sed -n '/^## /{s/^## //p}' $0
    exit 1
fi

echo chrooting into $1
mkdir -p $1/proc
mkdir -p $1/sys
mkdir -p $1/dev

mkdir -p $1/etc
cp /etc/resolv.conf $1/etc

mount --bind /proc $1/proc
mount --bind /sys $1/sys
mount --bind /dev $1/dev
mount --bind /dev/pts $1/dev/pts

chroot $1 /bin/bash

umount $1/dev/pts
umount $1/dev
umount $1/sys
umount $1/proc || umount -lf $1/proc

rm $1/etc/resolv.conf
