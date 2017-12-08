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
	{ 0xbaa6844c, "register_netdevice" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x45176ba2, "unregister_netdevice" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xca13d8c8, "_write_unlock_bh" },
	{ 0x25ec1b28, "strlen" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0x2124ec5f, "seq_open" },
	{ 0x83e0a162, "in_aton" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x90b5b24, "seq_puts" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd72e3480, "dev_get_by_name" },
	{ 0xdbc29be8, "skb_clone" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc7df16b6, "skb_copy" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x806d5133, "param_array_get" },
	{ 0x604cf294, "seq_printf" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0xb2f7a1cc, "dev_base_lock" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x909a1f0a, "dev_set_allmulti" },
	{ 0x8d62799c, "alloc_netdev" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xf263188a, "skb_realloc_headroom" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x996d9199, "seq_read" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x41779942, "dev_mc_add" },
	{ 0xaa136450, "param_get_charp" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x5789f256, "proc_mkdir" },
	{ 0xbec52775, "_read_lock_bh" },
	{ 0x5edb55b4, "proc_net" },
	{ 0x8d3894f2, "_ctype" },
	{ 0xae86307, "_write_lock_bh" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0x11009d53, "arp_create" },
	{ 0xdd132261, "printk" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x63b77250, "free_netdev" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x85abc85f, "strncmp" },
	{ 0xfa1d5917, "dev_close" },
	{ 0x6a6aaa4c, "arp_send" },
	{ 0xdcf68363, "dev_remove_pack" },
	{ 0x79312f78, "mod_timer" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xeaa293d0, "dev_mc_delete" },
	{ 0xfd6a184c, "dev_open" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x7dceceac, "capable" },
	{ 0xe6d1217e, "_write_lock" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0x526c1a65, "arp_xmit" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0xa6abf218, "_read_unlock_bh" },
	{ 0xa0ad243e, "ether_setup" },
	{ 0x283a7119, "_write_unlock" },
	{ 0xb490bb83, "netdev_set_master" },
	{ 0xec034e5, "_read_unlock" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0xf1442b3e, "seq_lseek" },
	{ 0x60c08a36, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0xc49c3553, "dev_alloc_name" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xaf25400d, "snprintf" },
	{ 0x69ef124c, "dev_add_pack" },
	{ 0x245b0ca0, "seq_release" },
	{ 0xa3a5be95, "memmove" },
	{ 0xb55a54e, "dev_queue_xmit" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "66867BEE9A2B2BEA399820D");
