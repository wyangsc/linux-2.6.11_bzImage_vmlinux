cmd_arch/x86_64/boot/setup.o := gcc -Wp,-MD,arch/x86_64/boot/.setup.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -D__ASSEMBLY__ -traditional -DSVGA_MODE=NORMAL_VGA  -D__BIG_KERNEL__   -c -o arch/x86_64/boot/setup.o arch/x86_64/boot/setup.S

deps_arch/x86_64/boot/setup.o := \
  arch/x86_64/boot/setup.S \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/asm/segment.h \
  include/asm/cache.h \
    $(wildcard include/config/x86/l1/cache/shift.h) \
  include/linux/version.h \
  include/linux/compile.h \
  include/asm/boot.h \
  include/asm/e820.h \
  include/linux/mmzone.h \
    $(wildcard include/config/force/max/zoneorder.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/discontigmem.h) \
  include/asm/page.h \
  arch/i386/boot/edd.S \
    $(wildcard include/config/edd.h) \
    $(wildcard include/config/edd/module.h) \
  include/linux/edd.h \
  include/asm/setup.h \
  arch/x86_64/boot/video.S \
    $(wildcard include/config/video/.h) \
    $(wildcard include/config/video/svga.h) \
    $(wildcard include/config/video/vesa.h) \
    $(wildcard include/config/video/compact.h) \
    $(wildcard include/config/video/retain.h) \
    $(wildcard include/config/video/local.h) \
    $(wildcard include/config/video/400/hack.h) \
    $(wildcard include/config/video/gfx/hack.h) \
    $(wildcard include/config/video/select.h) \

arch/x86_64/boot/setup.o: $(deps_arch/x86_64/boot/setup.o)

$(deps_arch/x86_64/boot/setup.o):
