cmd_fs/hfsplus/hfsplus.o := ld -m elf_x86_64  -r -o fs/hfsplus/hfsplus.o fs/hfsplus/super.o fs/hfsplus/options.o fs/hfsplus/inode.o fs/hfsplus/ioctl.o fs/hfsplus/extents.o fs/hfsplus/catalog.o fs/hfsplus/dir.o fs/hfsplus/btree.o fs/hfsplus/bnode.o fs/hfsplus/brec.o fs/hfsplus/bfind.o fs/hfsplus/tables.o fs/hfsplus/unicode.o fs/hfsplus/wrapper.o fs/hfsplus/bitmap.o fs/hfsplus/part_tbl.o
