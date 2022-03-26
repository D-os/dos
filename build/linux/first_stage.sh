cd /bin
for i in $(./toybox); do ./toybox ln -s toybox $i; done
