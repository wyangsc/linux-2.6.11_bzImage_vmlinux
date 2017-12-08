cmd_arch/x86_64/ia32/ia32entry.o := gcc -Wp,-MD,arch/x86_64/ia32/.ia32entry.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -D__ASSEMBLY__    -c -o arch/x86_64/ia32/ia32entry.o arch/x86_64/ia32/ia32entry.S

deps_arch/x86_64/ia32/ia32entry.o := \
  arch/x86_64/ia32/ia32entry.S \
    $(wildcard include/config/ia32/aout.h) \
  include/asm/dwarf2.h \
    $(wildcard include/config/debug/info.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/asm/calling.h \
    $(wildcard include/config/frame/pointer.h) \
  include/asm/offset.h \
  include/asm/current.h \
  include/asm/errno.h \
  include/asm-generic/errno.h \
  include/asm-generic/errno-base.h \
  include/asm/ia32_unistd.h \
  include/asm/thread_info.h \
  include/asm/page.h \
    $(wildcard include/config/discontigmem.h) \
  include/asm/types.h \
  include/asm/pda.h \
  include/asm/segment.h \
  include/asm/cache.h \
    $(wildcard include/config/x86/l1/cache/shift.h) \
  include/asm/vsyscall32.h \
  include/linux/linkage.h \
  include/asm/linkage.h \

arch/x86_64/ia32/ia32entry.o: $(deps_arch/x86_64/ia32/ia32entry.o)

$(deps_arch/x86_64/ia32/ia32entry.o):
