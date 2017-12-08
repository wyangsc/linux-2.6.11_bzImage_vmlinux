cmd_arch/x86_64/lib/memset.o := gcc -Wp,-MD,arch/x86_64/lib/.memset.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -D__ASSEMBLY__    -c -o arch/x86_64/lib/memset.o arch/x86_64/lib/memset.S

deps_arch/x86_64/lib/memset.o := \
  arch/x86_64/lib/memset.S \
  include/asm/cpufeature.h \

arch/x86_64/lib/memset.o: $(deps_arch/x86_64/lib/memset.o)

$(deps_arch/x86_64/lib/memset.o):
