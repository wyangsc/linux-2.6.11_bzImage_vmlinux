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
	{ 0xf9c39007, "get_sb_nodev" },
	{ 0x454c2c49, "update_atime" },
	{ 0xdd544123, "unload_nls" },
	{ 0xba8d9a09, "kernel_sendmsg" },
	{ 0x30a17284, "make_bad_inode" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x4af9e110, "del_timer" },
	{ 0x25ec1b28, "strlen" },
	{ 0x291b187d, "kill_anon_super" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0x9ccbf418, "send_sig" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xd0171d86, "is_bad_inode" },
	{ 0x4ddc4b9f, "utf8_mbtowc" },
	{ 0xd85e57b0, "find_inode_number" },
	{ 0xf82f1109, "utf8_wctomb" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0x72d2717e, "generic_delete_inode" },
	{ 0x827ad9ec, "dput" },
	{ 0x46bafd1b, "dget_locked" },
	{ 0x85df9b6c, "strsep" },
	{ 0x47bbac49, "generic_read_dir" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x2b9c49c3, "inode_setattr" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3ede031a, "__mod_page_state" },
	{ 0xed79db91, "inode_update_time" },
	{ 0x25de5775, "__insert_inode_hash" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x3fa03a97, "memset" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x44008f33, "d_rehash" },
	{ 0xb75665bc, "find_lock_page" },
	{ 0xfc0df100, "find_or_create_page" },
	{ 0x761c81d9, "d_alloc_root" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0x85abc85f, "strncmp" },
	{ 0xe5e81ba3, "kmem_cache_free" },
	{ 0x9a8e0124, "dcache_lock" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x79312f78, "mod_timer" },
	{ 0x7cc7fad5, "unlock_page" },
	{ 0xe27eee88, "fput" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0x7a72027e, "inode_init_once" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0x4a33c2f9, "d_validate" },
	{ 0xfe7217da, "page_follow_link_light" },
	{ 0x7dceceac, "capable" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0xb96eb133, "d_alloc" },
	{ 0x1b22986c, "load_nls" },
	{ 0x1000e51, "schedule" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0xe640b967, "inode_change_ok" },
	{ 0xdc1acb62, "kmem_cache_create" },
	{ 0x68e83444, "kernel_recvmsg" },
	{ 0xdb49cd2b, "register_filesystem" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x35513eea, "d_lookup" },
	{ 0x86763418, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0xfbc540c0, "iunique" },
	{ 0x932da67e, "kill_proc" },
	{ 0x6067a146, "memcpy" },
	{ 0x76537939, "permission" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x3f94e68e, "load_nls_default" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0x83067c36, "fget" },
	{ 0xcd9c35cb, "generic_readlink" },
	{ 0x5344b0b0, "put_page" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xe1dcd439, "unregister_filesystem" },
	{ 0x42602db8, "init_special_inode" },
	{ 0xf9e15fb, "new_inode" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x8c4c9af7, "remote_llseek" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xa3c9670, "clear_inode" },
	{ 0x3d7397a8, "page_put_link" },
	{ 0xcf38d1, "d_instantiate" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6CC340188E22A8EC517695D");
