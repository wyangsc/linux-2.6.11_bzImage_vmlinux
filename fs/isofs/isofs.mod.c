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
	{ 0xb6c3e8fe, "alloc_pages_current" },
	{ 0x6a0670ff, "kmem_cache_destroy" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xd47af918, "sb_min_blocksize" },
	{ 0xba7921dc, "zlib_inflateEnd" },
	{ 0xb89efb5, "__bread" },
	{ 0xdd544123, "unload_nls" },
	{ 0x30a17284, "make_bad_inode" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x25ec1b28, "strlen" },
	{ 0x17a05dda, "iget5_locked" },
	{ 0xd447c607, "grab_cache_page_nowait" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xd0171d86, "is_bad_inode" },
	{ 0xc1d50464, "match_strdup" },
	{ 0x88d306e1, "ll_rw_block" },
	{ 0x7dcbc335, "zlib_inflateInit_" },
	{ 0xf82f1109, "utf8_wctomb" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x86e9acae, "match_token" },
	{ 0xc8e3f824, "block_read_full_page" },
	{ 0x756e6992, "strnicmp" },
	{ 0x85df9b6c, "strsep" },
	{ 0x69f089e8, "page_symlink_inode_operations" },
	{ 0x47bbac49, "generic_read_dir" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x3fa03a97, "memset" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x234509f3, "strncat" },
	{ 0xdd132261, "printk" },
	{ 0x44008f33, "d_rehash" },
	{ 0x761c81d9, "d_alloc_root" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0x1075bf0, "panic" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x85abc85f, "strncmp" },
	{ 0xe5e81ba3, "kmem_cache_free" },
	{ 0x8c851892, "__wait_on_buffer" },
	{ 0x67d2351c, "generic_ro_fops" },
	{ 0x4e3567f7, "match_int" },
	{ 0x7cc7fad5, "unlock_page" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xf84d4e51, "__brelse" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0x6b60eef6, "zlib_inflate" },
	{ 0x7a72027e, "inode_init_once" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x47bfaf50, "__free_pages" },
	{ 0x9016dd82, "__get_free_pages" },
	{ 0x1b22986c, "load_nls" },
	{ 0xa768c17a, "unlock_new_inode" },
	{ 0x9c21e36c, "kill_block_super" },
	{ 0xdc1acb62, "kmem_cache_create" },
	{ 0xdb49cd2b, "register_filesystem" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x86763418, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x3f94e68e, "load_nls_default" },
	{ 0xd57ba29d, "d_splice_alias" },
	{ 0xc251e268, "get_sb_bdev" },
	{ 0x6f4bcc60, "sb_set_blocksize" },
	{ 0x5344b0b0, "put_page" },
	{ 0xc3346daf, "block_sync_page" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xe2ec9a2b, "ioctl_by_bdev" },
	{ 0xe1dcd439, "unregister_filesystem" },
	{ 0x42602db8, "init_special_inode" },
	{ 0xd3fd24f, "__getblk" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x40c8a7ff, "d_alloc_anon" },
	{ 0xcf38d1, "d_instantiate" },
	{ 0xe3bf423c, "generic_block_bmap" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=zlib_inflate";


MODULE_INFO(srcversion, "4F4749A7F00D22DF58E6E86");
