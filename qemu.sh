cd $(dirname $0)/out
IMG=tmp.img
trap 'rm $IMG' 1 2 3 15
dd if=/dev/zero of=$IMG bs=1024 count=1024
qemu-system-x86_64 -append "root=/dev/sda console=ttyS0" -serial stdio -m 1G -hda $IMG -kernel build/linux/arch/x86/boot/bzImage #-initrd build/initrd/initrd
rm -f $IMG
