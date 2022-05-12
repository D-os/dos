mkdir -p out/mnt
fuse2fs out/build/system.img out/mnt -o fakeroot,rw

mkdir -p out/mnt/run/user/2000
chown 2000 out/mnt/run/user/2000
chmod 0700 out/mnt/run/user/2000

sync
fusermount -u -z out/mnt
