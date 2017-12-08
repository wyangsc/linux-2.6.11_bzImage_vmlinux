cmd_arch/x86_64/boot/vmlinux.bin := objcopy -O binary -R .note -R .comment -S  arch/x86_64/boot/compressed/vmlinux arch/x86_64/boot/vmlinux.bin
