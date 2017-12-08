cmd_arch/x86_64/lib/copy_page.o := gcc -Wp,-MD,arch/x86_64/lib/.copy_page.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -D__ASSEMBLY__    -c -o arch/x86_64/lib/copy_page.o arch/x86_64/lib/copy_page.S

deps_arch/x86_64/lib/copy_page.o := \
  arch/x86_64/lib/copy_page.S \
  include/asm/cpufeature.h \

arch/x86_64/lib/copy_page.o: $(deps_arch/x86_64/lib/copy_page.o)

$(deps_arch/x86_64/lib/copy_page.o):
