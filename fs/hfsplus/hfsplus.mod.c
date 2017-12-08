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
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xd47af918, "sb_min_blocksize" },
	{ 0xb89efb5, "__bread" },
	{ 0x30a17284, "make_bad_inode" },
	{ 0x301a9195, "generic_file_llseek" },
	{ 0x410b2c65, "__mark_inode_dirty" },
	{ 0x349cba85, "strchr" },
	{ 0x25ec1b28, "strlen" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x4ddc4b9f, "utf8_mbtowc" },
	{ 0x80beec45, "cont_prepare_write" },
	{ 0x88d306e1, "ll_rw_block" },
	{ 0xf82f1109, "utf8_wctomb" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xc8e3f824, "block_read_full_page" },
	{ 0x85df9b6c, "strsep" },
	{ 0x69f089e8, "page_symlink_inode_operations" },
	{ 0x47bbac49, "generic_read_dir" },
	{ 0x4cfd8d0d, "igrab" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x9918ea6, "set_page_dirty" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x6705563c, "_atomic_dec_and_lock" },
	{ 0x25de5775, "__insert_inode_hash" },
	{ 0x3fa03a97, "memset" },
	{ 0xb56717cf, "xtime" },
	{ 0x84c18697, "inode_add_bytes" },
	{ 0xb14757ed, "file_fsync" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x44008f33, "d_rehash" },
	{ 0xfc0df100, "find_or_create_page" },
	{ 0x761c81d9, "d_alloc_root" },
	{ 0x1075bf0, "panic" },
	{ 0x254e3e9, "mpage_writepages" },
	{ 0xe5e81ba3, "kmem_cache_free" },
	{ 0x8c851892, "__wait_on_buffer" },
	{ 0x1ab56f61, "page_symlink" },
	{ 0x7cc7fad5, "unlock_page" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xf84d4e51, "__brelse" },
	{ 0xe3c2ccf6, "mark_page_accessed" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0x7a72027e, "inode_init_once" },
	{ 0x7dceceac, "capable" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x9680de2c, "generic_file_mmap" },
	{ 0xc4a59166, "generic_file_sendfile" },
	{ 0x313147e6, "block_write_full_page" },
	{ 0x2264b3af, "generic_commit_write" },
	{ 0x1000e51, "schedule" },
	{ 0xa768c17a, "unlock_new_inode" },
	{ 0x9c21e36c, "kill_block_super" },
	{ 0xde6728aa, "inode_set_bytes" },
	{ 0xdc1acb62, "kmem_cache_create" },
	{ 0xdb49cd2b, "register_filesystem" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x86763418, "iput" },
	{ 0x86440b02, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b669bf1, "generic_permission" },
	{ 0x6067a146, "memcpy" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0xc251e268, "get_sb_bdev" },
	{ 0x6f4bcc60, "sb_set_blocksize" },
	{ 0x5344b0b0, "put_page" },
	{ 0xce4b8574, "__blockdev_direct_IO" },
	{ 0xc3346daf, "block_sync_page" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0x3d327acd, "mark_buffer_dirty" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xe2ec9a2b, "ioctl_by_bdev" },
	{ 0xe1dcd439, "unregister_filesystem" },
	{ 0x42602db8, "init_special_inode" },
	{ 0x8e8f0964, "generic_file_write" },
	{ 0xf9e15fb, "new_inode" },
	{ 0xa3a5be95, "memmove" },
	{ 0xfccb89d0, "generic_file_read" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xcf38d1, "d_instantiate" },
	{ 0xe3bf423c, "generic_block_bmap" },
	{ 0xd1dcf01, "iget_locked" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "572B0A2694101CD1DF617AB");
