#!/bin/sh
set -e

mkdir -p out/build
out/tc/install/bin/clang --sysroot=out/sysroot -o out/build/tc-test -xc - <<EOF
#include <stdio.h>
int main()
{
    printf("Works!\n");
    return 0;
}
EOF

out/build/tc-test
