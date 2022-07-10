#!/system/bin/sh
/bin/find /sys/ -name modalias | /bin/xargs /bin/sort -u | /bin/xargs -n 1 /bin/modprobe
exit 0
