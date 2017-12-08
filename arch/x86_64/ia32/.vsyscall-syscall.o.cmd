cmd_arch/x86_64/ia32/vsyscall-syscall.o := gcc -Wp,-MD,arch/x86_64/ia32/.vsyscall-syscall.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -D__ASSEMBLY__  -m32  -c -o arch/x86_64/ia32/vsyscall-syscall.o arch/x86_64/ia32/vsyscall-syscall.S

deps_arch/x86_64/ia32/vsyscall-syscall.o := \
  arch/x86_64/ia32/vsyscall-syscall.S \
  include/asm/ia32_unistd.h \
  include/asm/offset.h \
  include/asm/segment.h \
  include/asm/cache.h \
    $(wildcard include/config/x86/l1/cache/shift.h) \
  include/linux/config.h \
    $(wildcard include/config/h.h) \
  arch/x86_64/ia32/vsyscall-sigreturn.S \

arch/x86_64/ia32/vsyscall-syscall.o: $(deps_arch/x86_64/ia32/vsyscall-syscall.o)

$(deps_arch/x86_64/ia32/vsyscall-syscall.o):
