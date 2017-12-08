cmd_arch/x86_64/lib/memmove.o := gcc -Wp,-MD,arch/x86_64/lib/.memmove.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -Wall -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -ffreestanding -O2     -fomit-frame-pointer -g  -mno-red-zone -mcmodel=kernel -pipe -fno-reorder-blocks	 -Wno-sign-compare  -mno-sse -mno-mmx -mno-sse2 -mno-3dnow      -DKBUILD_BASENAME=memmove -DKBUILD_MODNAME=memmove -c -o arch/x86_64/lib/.tmp_memmove.o arch/x86_64/lib/memmove.c

deps_arch/x86_64/lib/memmove.o := \
  arch/x86_64/lib/memmove.c \
  include/linux/string.h \
  include/linux/compiler.h \
  include/linux/compiler-gcc3.h \
  include/linux/compiler-gcc.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/linux/posix_types.h \
  include/linux/stddef.h \
  include/asm/posix_types.h \
  include/asm/types.h \
  include/asm/string.h \

arch/x86_64/lib/memmove.o: $(deps_arch/x86_64/lib/memmove.o)

$(deps_arch/x86_64/lib/memmove.o):
