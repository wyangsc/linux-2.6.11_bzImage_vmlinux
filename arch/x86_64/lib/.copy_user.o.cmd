cmd_arch/x86_64/lib/copy_user.o := gcc -Wp,-MD,arch/x86_64/lib/.copy_user.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -D__ASSEMBLY__    -c -o arch/x86_64/lib/copy_user.o arch/x86_64/lib/copy_user.S

deps_arch/x86_64/lib/copy_user.o := \
  arch/x86_64/lib/copy_user.S \
  include/asm/current.h \
  include/asm/offset.h \
  include/asm/thread_info.h \
  include/asm/page.h \
    $(wildcard include/config/discontigmem.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/asm/types.h \
  include/asm/pda.h \
  include/asm/cpufeature.h \

arch/x86_64/lib/copy_user.o: $(deps_arch/x86_64/lib/copy_user.o)

$(deps_arch/x86_64/lib/copy_user.o):
