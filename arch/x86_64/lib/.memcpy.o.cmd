cmd_arch/x86_64/lib/memcpy.o := gcc -Wp,-MD,arch/x86_64/lib/.memcpy.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -D__ASSEMBLY__    -c -o arch/x86_64/lib/memcpy.o arch/x86_64/lib/memcpy.S

deps_arch/x86_64/lib/memcpy.o := \
  arch/x86_64/lib/memcpy.S \
  include/asm/cpufeature.h \

arch/x86_64/lib/memcpy.o: $(deps_arch/x86_64/lib/memcpy.o)

$(deps_arch/x86_64/lib/memcpy.o):
