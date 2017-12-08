cmd_lib/zlib_inflate/inftrees.o := gcc -Wp,-MD,lib/zlib_inflate/.inftrees.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -Wall -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -ffreestanding -O2     -fomit-frame-pointer -g  -mno-red-zone -mcmodel=kernel -pipe -fno-reorder-blocks	 -Wno-sign-compare  -mno-sse -mno-mmx -mno-sse2 -mno-3dnow     -DMODULE -DKBUILD_BASENAME=inftrees -DKBUILD_MODNAME=zlib_inflate -c -o lib/zlib_inflate/.tmp_inftrees.o lib/zlib_inflate/inftrees.c

deps_lib/zlib_inflate/inftrees.o := \
  lib/zlib_inflate/inftrees.c \
  include/linux/zutil.h \
  include/linux/zlib.h \
  include/linux/zconf.h \
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
  include/linux/errno.h \
  include/asm/errno.h \
  include/asm-generic/errno.h \
  include/asm-generic/errno-base.h \
  include/linux/kernel.h \
    $(wildcard include/config/debug/spinlock/sleep.h) \
  /usr/lib/gcc-lib/x86_64-linux/3.3.5/include/stdarg.h \
  include/linux/linkage.h \
  include/asm/linkage.h \
  include/linux/bitops.h \
  include/asm/bitops.h \
    $(wildcard include/config/smp.h) \
  include/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/linux/byteorder/swab.h \
  include/linux/byteorder/generic.h \
  include/asm/bug.h \
  include/linux/stringify.h \
  include/asm-generic/bug.h \
  lib/zlib_inflate/inftrees.h \
  lib/zlib_inflate/infutil.h \
  lib/zlib_inflate/infcodes.h \
  lib/zlib_inflate/infblock.h \

lib/zlib_inflate/inftrees.o: $(deps_lib/zlib_inflate/inftrees.o)

$(deps_lib/zlib_inflate/inftrees.o):
