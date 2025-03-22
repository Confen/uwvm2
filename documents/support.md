# Supported platforms

## POSIX Environment
* Linux: (x86\_64, i386, aarch64, arm, loongarch64, powerpc64, riscv, mips, etc.)-linux-(gnu, android, ohos, musl, llvm, mlibc, uclibc, etc.)
* Darwin: (macosx, iphoneos, watchos): (x86\_64, i386, aarch64, arm, powerpc64)-apple-darwin
* FreeBSD: (x86\_64, i386, aarch64, arm, powerpc64, etc.)-freebsd(Version)
* NetBSD: unknown(50+)-netbsd
* OpenBSD: unknown-openbsd
* DragonflyBSD: (x86\_64, i386, aarch64, arm, powerpc64, etc.)-dragonfly
* WASM-WASI (bootstrap): (wasm32, wasm64)-(wasip1, wasip2)-(none, threads, neoh)
* SerenityOS: (x86\_64, i686)-serenity
* SunOS: (sparc, x86)-(sunos, solaris)-gnu

## Windows NT
* Supported system versions: Windows 2000 (Windows Server 2000), Windows XP (Windows Server 2003), Windows Server 2003 R2, Windows Vista (Windows Server 2008), Windows 7 (Windows Server 2008 R2), Windows 8 (Windows Server 2012), Windows Blue (Windows Server 2012 R2), Windows 10 (Windows Server 2016, Windows Server 2019, Windows Server 2022), Windows 11 (Windows Server 2025)
* MSVC: (x86\_64, i686, aarch64, arm)-windows-msvc
* MinGW: (x86\_64, i686, aarch64, arm)-windows-gnu (aka. unknown-w64-mingw32)

## Windows 9x
* Supported system versions: Windows 95, Windows 98, Windows ME
* MinGW: i686-windows-gnu (aka. i686-w64-mingw32)

## DOS
* MS-DOS, FreeDOS (DJGPP): i386-msdosdjgpp

## Host C Library Environment
* newlib: unknown-elf; (x86\_64, i386, etc.)-(cygwin, msys2)
* avr: avr-elf

## Freestanding
* ISO C++26 Freestanding Support

# C++ version support
- Full ISO C++26

# Compiler Support
- GCC >= 15
- Clang >= 21
- (MSVC has bugs in module handling, not supported at this time)

# C++ standard library support (Version is the same as the version released with the corresponding supported compiler)
- GNU libstdc++
- LLVM libc++
- MSVC STL
