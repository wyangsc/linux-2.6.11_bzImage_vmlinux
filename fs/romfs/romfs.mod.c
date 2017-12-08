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
	{ 0x6a0670ff, "kmem_cache_destroy" },
	{ 0xb89efb5, "__bread" },
	{ 0x69f089e8, "page_symlink_inode_operations" },
	{ 0x47bbac49, "generic_read_dir" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x3fa03a97, "memset" },
	{ 0xdd132261, "printk" },
	{ 0x44008f33, "d_rehash" },
	{ 0x761c81d9, "d_alloc_root" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0x85abc85f, "strncmp" },
	{ 0xe5e81ba3, "kmem_cache_free" },
	{ 0x67d2351c, "generic_ro_fops" },
	{ 0x7cc7fad5, "unlock_page" },
	{ 0xf84d4e51, "__brelse" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0x7a72027e, "inode_init_once" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0xcc07af75, "strnlen" },
	{ 0xa768c17a, "unlock_new_inode" },
	{ 0x9c21e36c, "kill_block_super" },
	{ 0xdc1acb62, "kmem_cache_create" },
	{ 0xdb49cd2b, "register_filesystem" },
	{ 0x86763418, "iput" },
	{ 0x6067a146, "memcpy" },
	{ 0xc251e268, "get_sb_bdev" },
	{ 0x6f4bcc60, "sb_set_blocksize" },
	{ 0x5344b0b0, "put_page" },
	{ 0xe1dcd439, "unregister_filesystem" },
	{ 0x42602db8, "init_special_inode" },
	{ 0xcf38d1, "d_instantiate" },
	{ 0xd1dcf01, "iget_locked" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6499E138E224EC53CBB800F");
