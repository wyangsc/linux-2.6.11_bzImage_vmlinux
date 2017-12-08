cmd_drivers/video/logo/logo.o := gcc -Wp,-MD,drivers/video/logo/.logo.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -Wall -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -ffreestanding -O2     -fomit-frame-pointer -g  -mno-red-zone -mcmodel=kernel -pipe -fno-reorder-blocks	 -Wno-sign-compare  -mno-sse -mno-mmx -mno-sse2 -mno-3dnow      -DKBUILD_BASENAME=logo -DKBUILD_MODNAME=logo -c -o drivers/video/logo/.tmp_logo.o drivers/video/logo/logo.c

deps_drivers/video/logo/logo.o := \
  drivers/video/logo/logo.c \
    $(wildcard include/config/m68k.h) \
    $(wildcard include/config/mips.h) \
    $(wildcard include/config/logo/linux/mono.h) \
    $(wildcard include/config/logo/superh/mono.h) \
    $(wildcard include/config/logo/linux/vga16.h) \
    $(wildcard include/config/logo/superh/vga16.h) \
    $(wildcard include/config/logo/linux/clut224.h) \
    $(wildcard include/config/logo/dec/clut224.h) \
    $(wildcard include/config/logo/mac/clut224.h) \
    $(wildcard include/config/logo/parisc/clut224.h) \
    $(wildcard include/config/logo/sgi/clut224.h) \
    $(wildcard include/config/x86/visws.h) \
    $(wildcard include/config/logo/sun/clut224.h) \
    $(wildcard include/config/logo/superh/clut224.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/linux/linux_logo.h \
  include/linux/init.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/hotplug.h) \
  include/linux/compiler.h \
  include/linux/compiler-gcc3.h \
  include/linux/compiler-gcc.h \
  include/linux/stddef.h \

drivers/video/logo/logo.o: $(deps_drivers/video/logo/logo.o)

$(deps_drivers/video/logo/logo.o):
