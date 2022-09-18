#!/bin/sh
cd "$(dirname "$0")/out" || exit
IMG=tmp.img
CMDLINE="loglevel=9 console=ttyS0 earlyprintk=ttyS0 printk.devkmsg=on androidboot.hardware=qemu androidboot.fstab_suffix=qemu androidboot.first_stage_console=0"
# BIOS="-bios /usr/share/edk2/ovmf/OVMF_CODE.fd"

SYSTEM_IMG=system.img
trap 'rm $IMG' 1 2 3 15
qemu-img create -b $SYSTEM_IMG -F raw -f qcow2 $IMG 5G

DATA_DIR=./data
mkdir -p $DATA_DIR

qemu-system-x86_64 -enable-kvm -machine q35 -cpu host -smp 4 -m 8G \
    -device virtio-vga-gl -display sdl,gl=on \
    -device intel-hda -device hda-duplex \
    -device virtio-mouse -device virtio-keyboard \
    -rtc clock=host,base=localtime \
    $BIOS -append "$CMDLINE" -serial mon:stdio \
    -kernel build/linux/arch/x86/boot/bzImage -initrd build/initramfs.gz \
    -drive format=qcow2,file=$IMG,cache=none,aio=threads,if=virtio \
    -virtfs local,path=$DATA_DIR,mount_tag=userdata,security_model=none \
    -virtfs local,path=./system/system,mount_tag=system,security_model=none,readonly=on \
    -virtfs local,path=./system/lib,mount_tag=lib,security_model=none,readonly=on \
    -virtfs local,path=./system/tests,mount_tag=tests,security_model=none,readonly=on \

rm -f $IMG
