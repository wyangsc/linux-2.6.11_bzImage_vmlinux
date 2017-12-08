cmd_arch/x86_64/lib/thunk.o := gcc -Wp,-MD,arch/x86_64/lib/.thunk.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -D__ASSEMBLY__    -c -o arch/x86_64/lib/thunk.o arch/x86_64/lib/thunk.S

deps_arch/x86_64/lib/thunk.o := \
  arch/x86_64/lib/thunk.S \
    $(wildcard include/config/rwsem/xchgadd/algorithm.h) \
    $(wildcard include/config/smp.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/linux/linkage.h \
  include/asm/linkage.h \
  include/asm/dwarf2.h \
    $(wildcard include/config/debug/info.h) \
  include/asm/calling.h \
    $(wildcard include/config/frame/pointer.h) \
  include/asm/rwlock.h \
  include/linux/stringify.h \

arch/x86_64/lib/thunk.o: $(deps_arch/x86_64/lib/thunk.o)

$(deps_arch/x86_64/lib/thunk.o):
