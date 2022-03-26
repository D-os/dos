cd $(dirname $0)/out
IMG=tmp.img
CMDLINE="loglevel=7 console=ttyS0 androidboot.fstab_suffix=qemu rdinit=/bin/sh"
trap 'rm $IMG' 1 2 3 15
qemu-img create $IMG 1G
qemu-system-x86_64 -enable-kvm \
    -append "$CMDLINE" -serial stdio \
    -m 1G -drive format=raw,file=$IMG \
    -kernel build/linux/arch/x86/boot/bzImage -initrd build/initramfs.gz
rm -f $IMG
