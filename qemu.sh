cd $(dirname $0)/out
IMG=tmp.img
trap 'rm $IMG' 1 2 3 15
qemu-img create $IMG 1G
qemu-system-x86_64 -enable-kvm \
    -append "loglevel=7 root=/dev/sda console=ttyS0" -serial stdio \
    -m 1G -drive format=raw,file=$IMG \
    -kernel build/linux/arch/x86/boot/bzImage #-initrd build/initrd/initrd
rm -f $IMG
