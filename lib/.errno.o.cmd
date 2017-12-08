cmd_lib/errno.o := gcc -Wp,-MD,lib/.errno.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -Wall -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -ffreestanding -O2     -fomit-frame-pointer -g  -mno-red-zone -mcmodel=kernel -pipe -fno-reorder-blocks	 -Wno-sign-compare  -mno-sse -mno-mmx -mno-sse2 -mno-3dnow      -DKBUILD_BASENAME=errno -DKBUILD_MODNAME=errno -c -o lib/.tmp_errno.o lib/errno.c

deps_lib/errno.o := \
  lib/errno.c \

lib/errno.o: $(deps_lib/errno.o)

$(deps_lib/errno.o):
