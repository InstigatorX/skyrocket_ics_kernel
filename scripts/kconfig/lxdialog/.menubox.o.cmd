cmd_scripts/kconfig/lxdialog/menubox.o := gcc -Wp,-MD,scripts/kconfig/lxdialog/.menubox.o.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer   -DCURSES_LOC="<ncurses.h>" -DLOCALE -DKBUILD_NO_NLS  -c -o scripts/kconfig/lxdialog/menubox.o scripts/kconfig/lxdialog/menubox.c

source_scripts/kconfig/lxdialog/menubox.o := scripts/kconfig/lxdialog/menubox.c

deps_scripts/kconfig/lxdialog/menubox.o := \
  scripts/kconfig/lxdialog/dialog.h \
  /usr/include/sys/types.h \
  /usr/include/sys/appleapiopts.h \
  /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h \
  /usr/include/machine/types.h \
  /usr/include/i386/types.h \
  /usr/include/i386/_types.h \
  /usr/include/sys/_types.h \
  /usr/include/machine/_types.h \
  /usr/include/machine/endian.h \
  /usr/include/i386/endian.h \
  /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h \
  /usr/include/sys/_structs.h \
  /usr/include/fcntl.h \
  /usr/include/sys/fcntl.h \
  /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h \
  /usr/include/unistd.h \
  /usr/include/_types.h \
  /usr/include/sys/unistd.h \
  /usr/include/sys/select.h \
  /usr/include/sys/_select.h \
  /usr/include/ctype.h \
  /usr/include/runetype.h \
  /usr/include/stdlib.h \
  /usr/include/sys/wait.h \
  /usr/include/sys/signal.h \
  /usr/include/machine/signal.h \
  /usr/include/i386/signal.h \
  /usr/include/i386/_structs.h \
  /usr/include/machine/_structs.h \
  /usr/include/mach/i386/_structs.h \
  /usr/include/sys/resource.h \
  /usr/include/alloca.h \
  /usr/include/string.h \
  /usr/include/strings.h \
  /usr/include/secure/_string.h \
  /usr/include/secure/_common.h \
  /Applications/Xcode.app/Contents/Developer/usr/llvm-gcc-4.2/lib/gcc/i686-apple-darwin11/4.2.1/include/stdbool.h \
  /usr/include/ncurses.h \
  /usr/include/ncurses_dll.h \
  /usr/include/stdio.h \
  /usr/include/secure/_stdio.h \
  /usr/include/unctrl.h \
  /usr/include/curses.h \
  /Applications/Xcode.app/Contents/Developer/usr/llvm-gcc-4.2/lib/gcc/i686-apple-darwin11/4.2.1/include/stdarg.h \

scripts/kconfig/lxdialog/menubox.o: $(deps_scripts/kconfig/lxdialog/menubox.o)

$(deps_scripts/kconfig/lxdialog/menubox.o):
