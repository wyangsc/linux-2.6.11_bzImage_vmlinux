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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x1d8a43b8, "kobject_put" },
	{ 0x6a0670ff, "kmem_cache_destroy" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x32d63b30, "ip_route_input" },
	{ 0x7b99cb7a, "sysfs_remove_bin_file" },
	{ 0x45176ba2, "unregister_netdevice" },
	{ 0x349cba85, "strchr" },
	{ 0x36d02a13, "register_sysctl_table" },
	{ 0x4af9e110, "del_timer" },
	{ 0x2c2fa4b6, "ip_route_output_key" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xac3fa0a8, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xe095afae, "rtnl_sem" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xdbc29be8, "skb_clone" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0xc5cc19a9, "kobject_set_name" },
	{ 0x78b1fd2, "nf_hooks" },
	{ 0x89b384c, "kobject_unregister" },
	{ 0x8d62799c, "alloc_netdev" },
	{ 0x86aea614, "nf_register_hook" },
	{ 0xdd748cac, "kobject_del" },
	{ 0x1251d30f, "call_rcu" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xe4ca92e1, "sysfs_remove_group" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0x3a1f4bb7, "nf_hook_slow" },
	{ 0x2eb2d8e6, "netif_rx" },
	{ 0xe7a331d5, "__pskb_pull_tail" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x3fa03a97, "memset" },
	{ 0xdd132261, "printk" },
	{ 0x7e34d7eb, "sysfs_create_group" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x63b77250, "free_netdev" },
	{ 0xd5614e73, "dev_ethtool" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xe9a60ad6, "__down_failed_trylock" },
	{ 0xb5ec86a8, "dev_base" },
	{ 0x85abc85f, "strncmp" },
	{ 0xe5e81ba3, "kmem_cache_free" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x6a5fd050, "dev_get_by_index" },
	{ 0x79312f78, "mod_timer" },
	{ 0x626dbbe3, "sysfs_remove_link" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x892c524d, "kobject_add" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xb3d2bf12, "find_first_zero_bit" },
	{ 0xf3beb824, "sysfs_create_link" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x7dceceac, "capable" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x7b0d49b3, "unregister_sysctl_table" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0x1edc4e5e, "sysfs_create_file" },
	{ 0x4e8a4d69, "brioctl_set" },
	{ 0xa0ad243e, "ether_setup" },
	{ 0x4a2211d2, "__dev_get_by_name" },
	{ 0xdc1acb62, "kmem_cache_create" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xabdbbad8, "nf_unregister_hook" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0x60c08a36, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0xd0f95f2, "___pskb_trim" },
	{ 0xc49c3553, "dev_alloc_name" },
	{ 0xeffd1eb3, "sysfs_create_bin_file" },
	{ 0x6e217748, "kobject_init" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xc304bda3, "unregister_netdev" },
	{ 0xee286fe5, "br_handle_frame_hook" },
	{ 0xb55a54e, "dev_queue_xmit" },
	{ 0x66bcc308, "_spin_lock_bh" },
	{ 0x47c8d6d4, "kobject_register" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x50edbddd, "dev_set_mtu" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EB1C7A4CA753B84C1654EFF");
