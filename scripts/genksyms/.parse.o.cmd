cmd_scripts/genksyms/parse.o := gcc -Wp,-MD,scripts/genksyms/.parse.o.d -Wall -Wstrict-prototypes -O2 -fomit-frame-pointer      -Wno-uninitialized -Iscripts/genksyms -c -o scripts/genksyms/parse.o scripts/genksyms/parse.c

deps_scripts/genksyms/parse.o := \
  scripts/genksyms/parse.c \
  /usr/include/assert.h \
  /usr/include/features.h \
  /usr/include/sys/cdefs.h \
  /usr/include/gnu/stubs.h \
  /usr/include/malloc.h \
  /usr/lib/gcc-lib/x86_64-linux/3.3.5/include/stddef.h \
  scripts/genksyms/genksyms.h \
  /usr/include/stdio.h \
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

scripts/genksyms/parse.o: $(deps_scripts/genksyms/parse.o)

$(deps_scripts/genksyms/parse.o):
