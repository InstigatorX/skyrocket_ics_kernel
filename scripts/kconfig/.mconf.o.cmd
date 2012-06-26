cmd_scripts/kconfig/mconf.o := gcc -Wp,-MD,scripts/kconfig/.mconf.o.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer   -DCURSES_LOC="<ncurses.h>" -DLOCALE -DKBUILD_NO_NLS  -c -o scripts/kconfig/mconf.o scripts/kconfig/mconf.c

source_scripts/kconfig/mconf.o := scripts/kconfig/mconf.c

deps_scripts/kconfig/mconf.o := \
    $(wildcard include/config/mode.h) \
    $(wildcard include/config/color.h) \
    $(wildcard include/config/.h) \
  /usr/include/ctype.h \
  /usr/include/runetype.h \
  /usr/include/_types.h \
  /usr/include/sys/_types.h \
  /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h \
  /usr/include/machine/_types.h \
  /usr/include/i386/_types.h \
  /usr/include/errno.h \
  /usr/include/sys/errno.h \
  /usr/include/fcntl.h \
  /usr/include/sys/fcntl.h \
  /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h \
  /Applications/Xcode.app/Contents/Developer/usr/llvm-gcc-4.2/lib/gcc/i686-apple-darwin11/4.2.1/include/limits.h \
  /Applications/Xcode.app/Contents/Developer/usr/llvm-gcc-4.2/lib/gcc/i686-apple-darwin11/4.2.1/include/syslimits.h \
  /usr/include/limits.h \
  /usr/include/machine/limits.h \
  /usr/include/i386/limits.h \
  /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /Applications/Xcode.app/Contents/Developer/usr/llvm-gcc-4.2/lib/gcc/i686-apple-darwin11/4.2.1/include/stdarg.h \
  /usr/include/stdlib.h \
  /usr/include/sys/wait.h \
  /usr/include/sys/signal.h \
  /usr/include/sys/appleapiopts.h \
  /usr/include/machine/signal.h \
  /usr/include/i386/signal.h \
  /usr/include/i386/_structs.h \
  /usr/include/sys/_structs.h \
  /usr/include/machine/_structs.h \
  /usr/include/mach/i386/_structs.h \
  /usr/include/sys/resource.h \
  /usr/include/machine/endian.h \
  /usr/include/i386/endian.h \
  /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h \
  /usr/include/alloca.h \
  /usr/include/machine/types.h \
  /usr/include/i386/types.h \
  /usr/include/i386/_types.h \
  /usr/include/string.h \
  /usr/include/strings.h \
  /usr/include/secure/_string.h \
  /usr/include/secure/_common.h \
  /usr/include/unistd.h \
  /usr/include/sys/unistd.h \
  /usr/include/sys/select.h \
  /usr/include/sys/_select.h \
  /usr/include/locale.h \
  /usr/include/_locale.h \
  scripts/kconfig/lkc.h \
    $(wildcard include/config/list.h) \
  scripts/kconfig/expr.h \
  /usr/include/stdio.h \
  /usr/include/secure/_stdio.h \
  /Applications/Xcode.app/Contents/Developer/usr/llvm-gcc-4.2/lib/gcc/i686-apple-darwin11/4.2.1/include/stdbool.h \
  scripts/kconfig/lkc_proto.h \
  scripts/kconfig/lxdialog/dialog.h \
  /usr/include/sys/types.h \
  /usr/include/ncurses.h \
  /usr/include/ncurses_dll.h \
  /usr/include/unctrl.h \
  /usr/include/curses.h \

scripts/kconfig/mconf.o: $(deps_scripts/kconfig/mconf.o)

$(deps_scripts/kconfig/mconf.o):
