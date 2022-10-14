#!/bin/sh
#
## chroot into a rootfs for the same architecture
## usage: ./chroot.sh ROOTDIR [COMMAND]
#
# put the following lines in /etc/sudoers.d/
# if you do not want to have to type the password
#Cmnd_Alias BUILD_COMMANDS = /usr/bin/mount,/usr/bin/umount,/usr/sbin/chroot
#%users ALL = NOPASSWD: BUILD_COMMANDS

DIR=$1
if [ -z "$DIR" ] || [ ! -d "$DIR" ]; then
  sed -n '/^## /{s/^## //p}' "$0"
  exit 1
fi

echo chrooting into $DIR

mkdir -p $DIR/etc
cp /etc/resolv.conf $DIR/etc
mkdir -p $DIR/proc
sudo mount --read-only --bind /proc $DIR/proc
mkdir -p $DIR/sys
sudo mount --read-only --bind /sys $DIR/sys
mkdir -p $DIR/dev
sudo mount --read-only --bind /dev $DIR/dev
sudo mount --read-only --bind /dev/pts $DIR/dev/pts

cleanup_chroot() {
grep -o "[^ ]*$DIR[^ ]*" /proc/self/mountinfo | sort -r | xargs sudo umount --recursive --lazy
rm $DIR/etc/resolv.conf
}

trap cleanup_chroot INT
stty -echoctl 2>/dev/null # hide ^C

shift
CMD=${1:=/bin/init}
shift
CMD=${CMD#$DIR}

sudo chroot $DIR "$CMD" "$@"

cleanup_chroot
