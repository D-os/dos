cd $(dirname $0)/out
IMG=tmp.img
CMDLINE="loglevel=7 console=ttyS0 printk.devkmsg=on androidboot.fstab_suffix=qemu androidboot.first_stage_console=0"
# BIOS="-bios /usr/share/edk2/ovmf/OVMF_CODE.fd"
SYSTEM_IMG=build/system.img
trap 'rm $IMG' 1 2 3 15
qemu-img create -b $SYSTEM_IMG -F raw -f qcow2 $IMG 1G
qemu-system-x86_64 -enable-kvm $BIOS \
    -append "$CMDLINE" -serial stdio \
    -m 1G -drive format=qcow2,file=$IMG,cache=none,aio=threads,if=virtio \
    -kernel build/linux/arch/x86/boot/bzImage -initrd build/initramfs.gz
rm -f $IMG
