<img align="left" height="128" src="D-os.gif">

# D/os

_δέος (déos)_ — Dee Operating System

[![Discord Chat](https://img.shields.io/discord/829063383008411738?logo=discord&style=for-the-badge)](https://discord.gg/6XpbT785kn)

## Mission statement

_Build operating system for workplace computers,
using best available open source components._

### Goals

- developer friendly
- reasonably unix-compliant
- lean base system

### Non-goals

- LSB compliance
- applications distribution

## Build && Run

- See `tools/tc-build/README.md` for a list of required host tools.
- Additionall host tools:
  - [D language](https://dlang.org/download.html) compiler
  - pahole (`dnf install dwarves`)
  - expat headers (`dnf install expat-devel`)
- QEmu needs you to be running Linux kernel with KVM support.

> :warning: This repository makes heavy use of git submodules, so you need to `git clone --recursive`

> :warning: Some of submodules store copious amount of data. You are advised to clone `--depth 1`

```sh
make toolchain sysroot compdb kernel kernel_modules
ninja && ./qemu.sh
```

### Testing

You need to be running Linux kernel with `binderfs` support.

#### Unit tests

```sh
ninja -f chroot.ninja out/system.content && ./chroot.sh out/system /tests/kits
```

#### Interactive tests

Clone [Weston][1] and make a local build for host. Then run it:
(`$DOS_DIR` is a directory with _this repository_ working copy.)

```sh
XDG_RUNTIME_DIR=$DOS_DIR/out/system/run build/compositor/weston
```

Having Weston window open run in another terminal window:

```sh
ninja -f chroot.ninja out/system.content && ./chroot.sh out/system env XDG_RUNTIME_DIR=/run WAYLAND_DISPLAY=wayland-1 WAYLAND_DEBUG=1 /tests/interface_window
```

[1]: https://github.com/D-os/weston.git

#### System integration tests

To run tests that require system services you need to build using `-f debug.ninja`
and run the following services on dedicated terminals:

```sh
ninja -f debug.ninja out/system.content && ./chroot.sh out/system /system/bin/servicemanager
```

```sh
ninja -f debug.ninja out/system.content && ./chroot.sh out/system /system/libexec/app_server
```

then run test:

```sh
ninja -f debug.ninja out/system.content && ./chroot.sh out/system /tests/app_message_runner
```
