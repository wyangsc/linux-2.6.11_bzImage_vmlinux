cmd_drivers/pci/gen-devlist := gcc -Wp,-MD,drivers/pci/.gen-devlist.d -Wall -Wstrict-prototypes -O2 -fomit-frame-pointer        -o drivers/pci/gen-devlist drivers/pci/gen-devlist.c

deps_drivers/pci/gen-devlist := \
  drivers/pci/gen-devlist.c \
  /usr/include/stdio.h \
  /usr/include/features.h \
  /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h \
  /usr/lib/gcc-lib/x86_64-linux/3.3.5/include/stddef.h \
  /usr/include/bits/types.h \
  /usr/include/bits/wordsize.h \
  /usr/include/bits/typesizes.h \
  /usr/include/libio.h \
  /usr/include/_G_config.h \
  /usr/include/wchar.h \
  /usr/include/bits/wchar.h \
  /usr/include/gconv.h \
  /usr/lib/gcc-lib/x86_64-linux/3.3.5/include/stdarg.h \
  /usr/include/bits/stdio_lim.h \
  /usr/include/bits/sys_errlist.h \
  /usr/include/bits/stdio.h \
  /usr/include/string.h \
  /usr/include/bits/string.h \
  /usr/include/bits/string2.h \
  /usr/include/endian.h \
  /usr/include/bits/endian.h \
  /usr/include/stdlib.h \

drivers/pci/gen-devlist: $(deps_drivers/pci/gen-devlist)

$(deps_drivers/pci/gen-devlist):
