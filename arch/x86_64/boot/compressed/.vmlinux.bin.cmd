cmd_arch/x86_64/boot/compressed/vmlinux.bin := objcopy -O binary -R .note -R .comment -S  vmlinux arch/x86_64/boot/compressed/vmlinux.bin
