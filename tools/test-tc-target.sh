#!/bin/sh
set -e

out/target/bin/x86_64-unknown-linux-musl-clang --sysroot=out/target/x86_64-unknown-linux-musl -o out/target/x86_64-unknown-linux-musl/tc-test -xc - <<EOF
#include <stdio.h>
int main()
{
    printf("Works!\n");
    return 0;
}
EOF

trap 'rm out/target/x86_64-unknown-linux-musl/tc-test' EXIT

file out/target/x86_64-unknown-linux-musl/tc-test

if out/target/x86_64-unknown-linux-musl/tc-test 2>/dev/null; then
    echo "FAILED: Should not run on native"
    exit 1
fi

sudo chroot out/target/x86_64-unknown-linux-musl /tc-test
