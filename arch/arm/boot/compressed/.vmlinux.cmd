cmd_arch/arm/boot/compressed/vmlinux := /opt/toolchains/arm-eabi-4.4.3/bin/arm-eabi-ld -EL    --defsym _kernel_bss_size=6466568 --defsym zreladdr=0x40408000 -p --no-undefined -X -T arch/arm/boot/compressed/vmlinux.lds arch/arm/boot/compressed/head.o arch/arm/boot/compressed/piggy.gzip.o arch/arm/boot/compressed/misc.o arch/arm/boot/compressed/decompress.o arch/arm/boot/compressed/string.o arch/arm/boot/compressed/lib1funcs.o -o arch/arm/boot/compressed/vmlinux 
