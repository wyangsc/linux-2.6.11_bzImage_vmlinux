#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

#undef unix
struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = __stringify(KBUILD_MODNAME),
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0x4b498bc8, "struct_module" },
	{ 0xba7921dc, "zlib_inflateEnd" },
	{ 0x301a9195, "generic_file_llseek" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x7dcbc335, "zlib_inflateInit_" },
	{ 0x69f089e8, "page_symlink_inode_operations" },
	{ 0x47bbac49, "generic_read_dir" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x25de5775, "__insert_inode_hash" },
	{ 0x3fa03a97, "memset" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x44008f33, "d_rehash" },
	{ 0x761c81d9, "d_alloc_root" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x67d2351c, "generic_ro_fops" },
	{ 0xae925eac, "wait_on_page_bit" },
	{ 0x7cc7fad5, "unlock_page" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0x6b60eef6, "zlib_inflate" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x9c21e36c, "kill_block_super" },
	{ 0xdb49cd2b, "register_filesystem" },
	{ 0x86763418, "iput" },
	{ 0x86440b02, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0xf56a3962, "zlib_inflateReset" },
	{ 0xc251e268, "get_sb_bdev" },
	{ 0x5344b0b0, "put_page" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xe1dcd439, "unregister_filesystem" },
	{ 0x42602db8, "init_special_inode" },
	{ 0xf9e15fb, "new_inode" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xcf38d1, "d_instantiate" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=zlib_inflate";


MODULE_INFO(srcversion, "9714E316642B56D11FC544A");
