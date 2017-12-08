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
	{ 0xd47af918, "sb_min_blocksize" },
	{ 0xb89efb5, "__bread" },
	{ 0xdd544123, "unload_nls" },
	{ 0x30a17284, "make_bad_inode" },
	{ 0x301a9195, "generic_file_llseek" },
	{ 0x410b2c65, "__mark_inode_dirty" },
	{ 0x815b5dd4, "match_octal" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x90b5b24, "seq_puts" },
	{ 0xd0171d86, "is_bad_inode" },
	{ 0xc1d50464, "match_strdup" },
	{ 0x80beec45, "cont_prepare_write" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x604cf294, "seq_printf" },
	{ 0x86e9acae, "match_token" },
	{ 0xc8e3f824, "block_read_full_page" },
	{ 0x1be96a7f, "generic_file_writev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x47bbac49, "generic_read_dir" },
	{ 0x4cfd8d0d, "igrab" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x2b9c49c3, "inode_setattr" },
	{ 0x25de5775, "__insert_inode_hash" },
	{ 0x3fa03a97, "memset" },
	{ 0xb56717cf, "xtime" },
	{ 0xb14757ed, "file_fsync" },
	{ 0xdd132261, "printk" },
	{ 0x761c81d9, "d_alloc_root" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x85abc85f, "strncmp" },
	{ 0x8e3c9cc3, "vprintk" },
	{ 0xe5e81ba3, "kmem_cache_free" },
	{ 0x4e3567f7, "match_int" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xf84d4e51, "__brelse" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x7a72027e, "inode_init_once" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0xc4a59166, "generic_file_sendfile" },
	{ 0x9680de2c, "generic_file_mmap" },
	{ 0x313147e6, "block_write_full_page" },
	{ 0x9016dd82, "__get_free_pages" },
	{ 0x1b22986c, "load_nls" },
	{ 0x2264b3af, "generic_commit_write" },
	{ 0xa768c17a, "unlock_new_inode" },
	{ 0xe640b967, "inode_change_ok" },
	{ 0xdc1acb62, "kmem_cache_create" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x86763418, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0xfbc540c0, "iunique" },
	{ 0x6067a146, "memcpy" },
	{ 0x6f4bcc60, "sb_set_blocksize" },
	{ 0xc3346daf, "block_sync_page" },
	{ 0x3d327acd, "mark_buffer_dirty" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x8e8f0964, "generic_file_write" },
	{ 0x863cb91a, "utf8_wcstombs" },
	{ 0xf9e15fb, "new_inode" },
	{ 0xe09594b1, "generic_file_readv" },
	{ 0xd3fd24f, "__getblk" },
	{ 0xfccb89d0, "generic_file_read" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x40c8a7ff, "d_alloc_anon" },
	{ 0xa3c9670, "clear_inode" },
	{ 0xe3bf423c, "generic_block_bmap" },
	{ 0xd1dcf01, "iget_locked" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A9CA63A4A21E412D8BD5DEE");
