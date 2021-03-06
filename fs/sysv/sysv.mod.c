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
	{ 0x3f7912af, "mark_buffer_dirty_inode" },
	{ 0xb89efb5, "__bread" },
	{ 0x30a17284, "make_bad_inode" },
	{ 0x301a9195, "generic_file_llseek" },
	{ 0x410b2c65, "__mark_inode_dirty" },
	{ 0x25ec1b28, "strlen" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xd0171d86, "is_bad_inode" },
	{ 0x25820c64, "fs_overflowuid" },
	{ 0xaaf64f57, "__lock_page" },
	{ 0xf988399d, "__lock_buffer" },
	{ 0xc8e3f824, "block_read_full_page" },
	{ 0x47bbac49, "generic_read_dir" },
	{ 0xc288edae, "unlock_buffer" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xcbab6423, "block_prepare_write" },
	{ 0x25de5775, "__insert_inode_hash" },
	{ 0x3fa03a97, "memset" },
	{ 0xb56717cf, "xtime" },
	{ 0xdd132261, "printk" },
	{ 0x44008f33, "d_rehash" },
	{ 0xfc0df100, "find_or_create_page" },
	{ 0x761c81d9, "d_alloc_root" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0xe5e81ba3, "kmem_cache_free" },
	{ 0x1ab56f61, "page_symlink" },
	{ 0xdc60b708, "sync_dirty_buffer" },
	{ 0xae925eac, "wait_on_page_bit" },
	{ 0x7cc7fad5, "unlock_page" },
	{ 0xf84d4e51, "__brelse" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0x7a72027e, "inode_init_once" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0xfe7217da, "page_follow_link_light" },
	{ 0xe6d1217e, "_write_lock" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55610c94, "sync_mapping_buffers" },
	{ 0xcc07af75, "strnlen" },
	{ 0x9680de2c, "generic_file_mmap" },
	{ 0xc4a59166, "generic_file_sendfile" },
	{ 0x313147e6, "block_write_full_page" },
	{ 0x2264b3af, "generic_commit_write" },
	{ 0xa768c17a, "unlock_new_inode" },
	{ 0x9c21e36c, "kill_block_super" },
	{ 0x283a7119, "_write_unlock" },
	{ 0xdc1acb62, "kmem_cache_create" },
	{ 0xdb49cd2b, "register_filesystem" },
	{ 0xec034e5, "_read_unlock" },
	{ 0x86763418, "iput" },
	{ 0x86440b02, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0xc251e268, "get_sb_bdev" },
	{ 0xe2fa961d, "block_truncate_page" },
	{ 0x6f4bcc60, "sb_set_blocksize" },
	{ 0xcd9c35cb, "generic_readlink" },
	{ 0x5344b0b0, "put_page" },
	{ 0x66b1fd61, "__bforget" },
	{ 0xc3346daf, "block_sync_page" },
	{ 0x3d327acd, "mark_buffer_dirty" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xe1dcd439, "unregister_filesystem" },
	{ 0x5d636a68, "write_one_page" },
	{ 0x42602db8, "init_special_inode" },
	{ 0x8e8f0964, "generic_file_write" },
	{ 0xf9e15fb, "new_inode" },
	{ 0xd3fd24f, "__getblk" },
	{ 0xfccb89d0, "generic_file_read" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xa3c9670, "clear_inode" },
	{ 0x3d7397a8, "page_put_link" },
	{ 0xcf38d1, "d_instantiate" },
	{ 0xe3bf423c, "generic_block_bmap" },
	{ 0xd1dcf01, "iget_locked" },
	{ 0x51d8640b, "generic_fillattr" },
	{ 0xdf929370, "fs_overflowgid" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BE8A5A8E49489630D50D554");
