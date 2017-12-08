cmd_arch/x86_64/lib/csum-copy.o := gcc -Wp,-MD,arch/x86_64/lib/.csum-copy.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -D__ASSEMBLY__    -c -o arch/x86_64/lib/csum-copy.o arch/x86_64/lib/csum-copy.S

deps_arch/x86_64/lib/csum-copy.o := \
  arch/x86_64/lib/csum-copy.S \
  include/linux/linkage.h \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/asm/linkage.h \
  include/asm/errno.h \
  include/asm-generic/errno.h \
  include/asm-generic/errno-base.h \

arch/x86_64/lib/csum-copy.o: $(deps_arch/x86_64/lib/csum-copy.o)

$(deps_arch/x86_64/lib/csum-copy.o):
