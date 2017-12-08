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
	{ 0xf9c39007, "get_sb_nodev" },
	{ 0x454c2c49, "update_atime" },
	{ 0x301a9195, "generic_file_llseek" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x36d02a13, "register_sysctl_table" },
	{ 0x25ec1b28, "strlen" },
	{ 0x17a05dda, "iget5_locked" },
	{ 0x291b187d, "kill_anon_super" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0xac3fa0a8, "proc_dointvec" },
	{ 0xa468b848, "class_simple_create" },
	{ 0x2ec1f736, "remove_inode_hash" },
	{ 0xd0171d86, "is_bad_inode" },
	{ 0xd85e57b0, "find_inode_number" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x827ad9ec, "dput" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0x223dcd1e, "d_find_alias" },
	{ 0x47bbac49, "generic_read_dir" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x52d94821, "d_delete" },
	{ 0x926d701, "default_wake_function" },
	{ 0x25de5775, "__insert_inode_hash" },
	{ 0x2933282a, "kernel_read" },
	{ 0x3fa03a97, "memset" },
	{ 0xb56717cf, "xtime" },
	{ 0x5789f256, "proc_mkdir" },
	{ 0xdd132261, "printk" },
	{ 0x44008f33, "d_rehash" },
	{ 0x761c81d9, "d_alloc_root" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x85abc85f, "strncmp" },
	{ 0xe2f1e52c, "class_simple_device_remove" },
	{ 0xe5e81ba3, "kmem_cache_free" },
	{ 0x9a8e0124, "dcache_lock" },
	{ 0x7cc7fad5, "unlock_page" },
	{ 0x6da0cf9e, "path_release" },
	{ 0xdea7e304, "shrink_dcache_sb" },
	{ 0xad8429e9, "__user_walk" },
	{ 0xe27eee88, "fput" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0x7a72027e, "inode_init_once" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0xfe7217da, "page_follow_link_light" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x7b0d49b3, "unregister_sysctl_table" },
	{ 0x1000e51, "schedule" },
	{ 0xa768c17a, "unlock_new_inode" },
	{ 0xdbd4b92d, "register_chrdev" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0x138cea37, "d_prune_aliases" },
	{ 0xdd96b47, "shrink_dcache_parent" },
	{ 0xfc92c84f, "proc_root_fs" },
	{ 0xf2ee1654, "class_simple_destroy" },
	{ 0xdc1acb62, "kmem_cache_create" },
	{ 0xdb49cd2b, "register_filesystem" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x86763418, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x83067c36, "fget" },
	{ 0xcd9c35cb, "generic_readlink" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xe1dcd439, "unregister_filesystem" },
	{ 0x42602db8, "init_special_inode" },
	{ 0xf9e15fb, "new_inode" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xf99c9f6a, "class_simple_device_add" },
	{ 0x3d7397a8, "page_put_link" },
	{ 0xcf38d1, "d_instantiate" },
	{ 0x51d8640b, "generic_fillattr" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "91A676B24F815063D15AD99");
