cmd_drivers/char/ipmi/ipmi_bt_sm.o := gcc -Wp,-MD,drivers/char/ipmi/.ipmi_bt_sm.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -Wall -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -ffreestanding -O2     -fomit-frame-pointer -g  -mno-red-zone -mcmodel=kernel -pipe -fno-reorder-blocks	 -Wno-sign-compare  -mno-sse -mno-mmx -mno-sse2 -mno-3dnow     -DMODULE -DKBUILD_BASENAME=ipmi_bt_sm -DKBUILD_MODNAME=ipmi_si -c -o drivers/char/ipmi/.tmp_ipmi_bt_sm.o drivers/char/ipmi/ipmi_bt_sm.c

deps_drivers/char/ipmi/ipmi_bt_sm.o := \
  drivers/char/ipmi/ipmi_bt_sm.c \
  include/linux/kernel.h \
    $(wildcard include/config/debug/spinlock/sleep.h) \
  /usr/lib/gcc-lib/x86_64-linux/3.3.5/include/stdarg.h \
  include/linux/linkage.h \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  include/asm/linkage.h \
  include/linux/stddef.h \
  include/linux/compiler.h \
  include/linux/compiler-gcc3.h \
  include/linux/compiler-gcc.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
  include/linux/posix_types.h \
  include/asm/posix_types.h \
  include/asm/types.h \
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
  include/linux/string.h \
  include/asm/string.h \
  include/linux/ipmi_msgdefs.h \
  drivers/char/ipmi/ipmi_si_sm.h \

drivers/char/ipmi/ipmi_bt_sm.o: $(deps_drivers/char/ipmi/ipmi_bt_sm.o)

$(deps_drivers/char/ipmi/ipmi_bt_sm.o):
