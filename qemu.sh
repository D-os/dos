cd $(dirname $0)/out
IMG=tmp.img
CMDLINE="loglevel=7 console=ttyS0 androidboot.fstab_suffix=qemu androidboot.first_stage_console=1"
# BIOS="-bios /usr/share/edk2/ovmf/OVMF_CODE.fd"
trap 'rm $IMG' 1 2 3 15
qemu-img create -f raw $IMG 1G
mkfs.ext4 $IMG
qemu-system-x86_64 -enable-kvm $BIOS \
    -append "$CMDLINE" -serial stdio \
    -m 1G -drive format=raw,file=$IMG,cache=none,aio=threads,if=virtio \
    -kernel build/linux/arch/x86/boot/bzImage -initrd build/initramfs/initramfs.gz
rm -f $IMG
