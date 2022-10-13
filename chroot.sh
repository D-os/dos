#!/bin/sh
#
## chroot into a rootfs for the same architecture
## usage: sudo ./chroot.sh ROOTDIR [COMMAND]

DIR=$1
CMD=$2

if [ -z "$DIR" ] || [ ! -d "$DIR" ]; then
  sed -n '/^## /{s/^## //p}' $0
  exit 1
fi

echo chrooting into $DIR

mkdir -p $DIR/etc
cp /etc/resolv.conf $DIR/etc
mkdir -p $DIR/proc
mount --read-only --bind /proc $DIR/proc
mkdir -p $DIR/sys
mount --read-only --bind /sys $DIR/sys
mkdir -p $DIR/dev
mount --read-only --bind /dev $DIR/dev
mount --read-only --bind /dev/pts $DIR/dev/pts

cleanup_chroot() {
grep -o "[^ ]*$DIR[^ ]*" /proc/self/mountinfo | sort -r | xargs umount --recursive --lazy
rm $DIR/etc/resolv.conf
}

trap cleanup_chroot SIGINT
stty -echoctl # hide ^C

chroot $DIR ${CMD:=/bin/init}

cleanup_chroot
