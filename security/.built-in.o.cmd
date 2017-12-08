cmd_security/built-in.o :=  ld -m elf_x86_64  -r -o security/built-in.o security/keys/built-in.o security/security.o security/dummy.o security/selinux/built-in.o
