cmd_arch/x86_64/kernel/vmlinux.lds := gcc -E -Wp,-MD,arch/x86_64/kernel/.vmlinux.lds.d -nostdinc -isystem /usr/lib/gcc-lib/x86_64-linux/3.3.5/include -D__KERNEL__ -Iinclude   -P -C -Ux86_64 -D__ASSEMBLY__ -o arch/x86_64/kernel/vmlinux.lds arch/x86_64/kernel/vmlinux.lds.S

deps_arch/x86_64/kernel/vmlinux.lds := \
  arch/x86_64/kernel/vmlinux.lds.S \
    $(wildcard include/config/x86/l1/cache/bytes.h) \
    $(wildcard include/config/debug/info.h) \
  include/asm-generic/vmlinux.lds.h \
  include/linux/config.h \
    $(wildcard include/config/h.h) \

arch/x86_64/kernel/vmlinux.lds: $(deps_arch/x86_64/kernel/vmlinux.lds)

$(deps_arch/x86_64/kernel/vmlinux.lds):
