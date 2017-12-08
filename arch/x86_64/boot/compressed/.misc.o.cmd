cmd_arch/x86_64/boot/compressed/misc.o := gcc -Wp,-MD,arch/x86_64/boot/compressed/.misc.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -m32 -D__KERNEL__ -Iinclude -O2  -fno-strict-aliasing    -DKBUILD_BASENAME=misc -DKBUILD_MODNAME=misc -c -o arch/x86_64/boot/compressed/.tmp_misc.o arch/x86_64/boot/compressed/misc.c

deps_arch/x86_64/boot/compressed/misc.o := \
  arch/x86_64/boot/compressed/misc.c \
  arch/x86_64/boot/compressed/miscsetup.h \
  include/asm/io.h \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/unordered/io.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  lib/inflate.c \
  include/linux/compiler.h \
  include/linux/compiler-gcc3.h \
  include/linux/compiler-gcc.h \

arch/x86_64/boot/compressed/misc.o: $(deps_arch/x86_64/boot/compressed/misc.o)

$(deps_arch/x86_64/boot/compressed/misc.o):
