#!/bin/sh
#
## chroot into a rootfs for the same architecture
## usage: ./chroot.sh ROOTDIR [COMMAND]
#
# put the following lines in /etc/sudoers.d/
# if you do not want to have to type the password
#Cmnd_Alias BUILD_COMMANDS = /usr/bin/mount,/usr/bin/umount,/usr/sbin/chroot,/usr/bin/ln,/usr/bin/mkdir
#%users ALL = NOPASSWD: BUILD_COMMANDS

DIR=$1
if [ -z "$DIR" ] || [ ! -d "$DIR" ]; then
  sed -n '/^## /{s/^## //p}' "$0" 2>&1
  exit 1
fi

echo chrooting into $DIR

cleanup_chroot() {
  grep -o "[^ ]*$DIR[^ ]*" /proc/self/mountinfo | sort -r | xargs sudo umount --recursive --lazy
  rm $DIR/etc/resolv.conf
  NEED_CLEANUP=0
}

if mount | grep -q $DIR; then
  echo "$DIR is already configured" 2>&1
else
  NEED_CLEANUP=1

  mkdir -p $DIR/etc
  cp /etc/resolv.conf $DIR/etc
  mkdir -p $DIR/proc
  sudo mount --read-only --bind /proc $DIR/proc
  mkdir -p $DIR/sys
  sudo mount --read-only --bind /sys $DIR/sys
  mkdir -p $DIR/dev
  sudo mount --bind /dev $DIR/dev
  sudo mount --read-only --bind /dev/pts $DIR/dev/pts
  sudo mkdir -p $DIR/dev/binderfs
  sudo mount -t binder binder $DIR/dev/binderfs
  sudo ln -sf binderfs/binder $DIR/dev/binder

  trap cleanup_chroot INT
  stty -echoctl 2>/dev/null # hide ^C
fi

shift
CMD=${1:=/bin/init}
shift
CMD=${CMD#$DIR}

sudo chroot $DIR "$CMD" "$@"

[ "$NEED_CLEANUP" = 1 ] && cleanup_chroot
