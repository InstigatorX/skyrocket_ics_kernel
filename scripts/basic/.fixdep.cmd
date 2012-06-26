cmd_scripts/basic/fixdep := gcc -Wp,-MD,scripts/basic/.fixdep.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer     -o scripts/basic/fixdep scripts/basic/fixdep.c  

source_scripts/basic/fixdep := scripts/basic/fixdep.c

deps_scripts/basic/fixdep := \
    $(wildcard include/config/his/driver.h) \
    $(wildcard include/config/my/option.h) \
    $(wildcard include/config/.h) \
    $(wildcard include/config/foo.h) \
    $(wildcard include/config/boom.h) \
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
  /usr/include/sys/stat.h \
  /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h \
  /usr/include/sys/mman.h \
  /usr/include/unistd.h \
  /usr/include/_types.h \
  /usr/include/sys/unistd.h \
  /usr/include/sys/select.h \
  /usr/include/sys/_select.h \
  /usr/include/fcntl.h \
  /usr/include/sys/fcntl.h \
  /usr/include/string.h \
  /usr/include/strings.h \
  /usr/include/secure/_string.h \
  /usr/include/secure/_common.h \
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
  /usr/include/stdio.h \
  /usr/include/secure/_stdio.h \
  /Applications/Xcode.app/Contents/Developer/usr/llvm-gcc-4.2/lib/gcc/i686-apple-darwin11/4.2.1/include/limits.h \
  /Applications/Xcode.app/Contents/Developer/usr/llvm-gcc-4.2/lib/gcc/i686-apple-darwin11/4.2.1/include/syslimits.h \
  /usr/include/limits.h \
  /usr/include/machine/limits.h \
  /usr/include/i386/limits.h \
  /usr/include/i386/_limits.h \
  /usr/include/sys/syslimits.h \
  /usr/include/ctype.h \
  /usr/include/runetype.h \
  /usr/include/arpa/inet.h \
  /usr/include/stdint.h \
  /usr/include/netinet/in.h \
  /usr/include/sys/socket.h \
  /usr/include/machine/_param.h \
  /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h \

scripts/basic/fixdep: $(deps_scripts/basic/fixdep)

$(deps_scripts/basic/fixdep):
