<img align="left" height="128" src="D-os.gif">

# D/os

_δέος (déos)_ — Dee Operating System

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

> :warning: This repository makes heavy use of git submodules, so you need to `git clone --recursive`

```sh
make toolchain sysroot compdb kernel kernel_modules
ninja && qemu.sh
```

### Testing

```sh
ninja out/system.content && ./chroot.sh out/system /tests/kits
```
