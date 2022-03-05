<img align="left" height="128" src="D-os.gif">

# D/os

Dee Operating System

[![Discord Chat](https://img.shields.io/discord/829063383008411738?logo=discord&style=for-the-badge)](https://discord.gg/6XpbT785kn)

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

See `tools/tc-build/README.md` for a list of required host tools.

```sh
make toolchain sysroot compdb kernel kernel_modules
PATH=$PWD/out/tc/host/bin:$PATH ninja
```
