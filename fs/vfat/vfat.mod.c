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
	{ 0x7442590d, "fat__get_entry" },
	{ 0x914db674, "fat_detach" },
	{ 0x410b2c65, "__mark_inode_dirty" },
	{ 0x247cb7ca, "d_invalidate" },
	{ 0x25ec1b28, "strlen" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x827ad9ec, "dput" },
	{ 0x223dcd1e, "d_find_alias" },
	{ 0x756e6992, "strnicmp" },
	{ 0xc1252010, "fat_add_entries" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf0f45a5b, "fat_notify_change" },
	{ 0xb56717cf, "xtime" },
	{ 0xfd166beb, "fat_fill_super" },
	{ 0x6a56a10b, "fat_build_inode" },
	{ 0x8d3894f2, "_ctype" },
	{ 0xdd132261, "printk" },
	{ 0x485840a1, "fat_attach" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0x85abc85f, "strncmp" },
	{ 0x7d850612, "utf8_mbstowcs" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xf84d4e51, "__brelse" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x9016dd82, "__get_free_pages" },
	{ 0x9c21e36c, "kill_block_super" },
	{ 0x94d9f059, "fat_search_long" },
	{ 0x8b18831, "fat_date_unix2dos" },
	{ 0x4aa3dc6c, "fat_new_dir" },
	{ 0x333e5fa9, "fat_scan" },
	{ 0xdb49cd2b, "register_filesystem" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x86763418, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0xd57ba29d, "d_splice_alias" },
	{ 0xc251e268, "get_sb_bdev" },
	{ 0x3d327acd, "mark_buffer_dirty" },
	{ 0xe1dcd439, "unregister_filesystem" },
	{ 0x9c32eba2, "fat_dir_empty" },
	{ 0xcf38d1, "d_instantiate" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=fat";


MODULE_INFO(srcversion, "9B1DD885A44FEAB37CDCA30");
