cmd_arch/x86_64/ia32/vsyscall-sysenter.o := gcc -Wp,-MD,arch/x86_64/ia32/.vsyscall-sysenter.o.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude  -D__ASSEMBLY__  -m32  -c -o arch/x86_64/ia32/vsyscall-sysenter.o arch/x86_64/ia32/vsyscall-sysenter.S

deps_arch/x86_64/ia32/vsyscall-sysenter.o := \
  arch/x86_64/ia32/vsyscall-sysenter.S \
  include/asm/ia32_unistd.h \
  include/asm/offset.h \
  arch/x86_64/ia32/vsyscall-sigreturn.S \

arch/x86_64/ia32/vsyscall-sysenter.o: $(deps_arch/x86_64/ia32/vsyscall-sysenter.o)

$(deps_arch/x86_64/ia32/vsyscall-sysenter.o):
