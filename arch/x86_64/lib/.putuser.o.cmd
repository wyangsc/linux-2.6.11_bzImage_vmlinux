cmd_arch/x86_64/lib/putuser.o := gcc -Wp,-MD,arch/x86_64/lib/.putuser.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -D__ASSEMBLY__    -c -o arch/x86_64/lib/putuser.o arch/x86_64/lib/putuser.S

deps_arch/x86_64/lib/putuser.o := \
  arch/x86_64/lib/putuser.S \
  include/linux/linkage.h \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/asm/linkage.h \
  include/asm/page.h \
    $(wildcard include/config/discontigmem.h) \
  include/asm/errno.h \
  include/asm-generic/errno.h \
  include/asm-generic/errno-base.h \
  include/asm/offset.h \
  include/asm/thread_info.h \
  include/asm/types.h \
  include/asm/pda.h \

arch/x86_64/lib/putuser.o: $(deps_arch/x86_64/lib/putuser.o)

$(deps_arch/x86_64/lib/putuser.o):
