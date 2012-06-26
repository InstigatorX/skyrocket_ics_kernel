cmd_scripts/kconfig/zconf.tab.o := gcc -Wp,-MD,scripts/kconfig/.zconf.tab.o.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer   -DCURSES_LOC="<ncurses.h>" -DLOCALE -DKBUILD_NO_NLS -Iscripts/kconfig -c -o scripts/kconfig/zconf.tab.o scripts/kconfig/zconf.tab.c

source_scripts/kconfig/zconf.tab.o := scripts/kconfig/zconf.tab.c

deps_scripts/kconfig/zconf.tab.o := \
  /usr/include/ctype.h \
  /usr/include/runetype.h \
  /usr/include/_types.h \
  /usr/include/sys/_types.h \
  /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h \
  /usr/include/machine/_types.h \
  /usr/include/i386/_types.h \
  /Applications/Xcode.app/Contents/Developer/usr/llvm-gcc-4.2/lib/gcc/i686-apple-darwin11/4.2.1/include/stdarg.h \
  /usr/include/stdio.h \
  /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h \
  /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h \
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
  /Applications/Xcode.app/Contents/Developer/usr/llvm-gcc-4.2/lib/gcc/i686-apple-darwin11/4.2.1/include/stdbool.h \
  scripts/kconfig/lkc.h \
    $(wildcard include/config/.h) \
    $(wildcard include/config/list.h) \
  scripts/kconfig/expr.h \
  scripts/kconfig/lkc_proto.h \
  scripts/kconfig/zconf.hash.c \
  scripts/kconfig/lex.zconf.c \
  /usr/include/errno.h \
  /usr/include/sys/errno.h \
  /Applications/Xcode.app/Contents/Developer/usr/llvm-gcc-4.2/lib/gcc/i686-apple-darwin11/4.2.1/include/limits.h \
  /Applications/Xcode.app/Contents/Developer/usr/llvm-gcc-4.2/lib/gcc/i686-apple-darwin11/4.2.1/include/syslimits.h \
  /usr/include/limits.h \
  /usr/include/machine/limits.h \
  /usr/include/i386/limits.h \
  /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /usr/include/unistd.h \
  /usr/include/sys/unistd.h \
  /usr/include/sys/select.h \
  /usr/include/sys/_select.h \
  scripts/kconfig/util.c \
  scripts/kconfig/confdata.c \
    $(wildcard include/config/config.h) \
    $(wildcard include/config/autoconfig.h) \
    $(wildcard include/config/overwriteconfig.h) \
    $(wildcard include/config/autoheader.h) \
    $(wildcard include/config/tristate.h) \
  /usr/include/sys/stat.h \
  /usr/include/fcntl.h \
  /usr/include/sys/fcntl.h \
  /usr/include/time.h \
  /usr/include/_structs.h \
  scripts/kconfig/expr.c \
  scripts/kconfig/symbol.c \
  /usr/include/regex.h \
  /usr/include/sys/utsname.h \
  scripts/kconfig/menu.c \

scripts/kconfig/zconf.tab.o: $(deps_scripts/kconfig/zconf.tab.o)

$(deps_scripts/kconfig/zconf.tab.o):
