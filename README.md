<img align="left" height="128" src="D-os.gif">

# D/os

Dee Operating System

## Mission statement

Build operating system for workplace computers,
using best available open source components.

### Goals

- developer friendly
- reasonably unix-compliant
- lean base system

### Non-goals

- LSB compliance
- applications distribution

## Building

See [`tools/tc-build/README.md`](tools/tc-build/README.md) for a list of required host tools.

```sh
make toolchain sysroot compdb
PATH=$PWD/out/tc/host/bin:$PATH ninja
```
