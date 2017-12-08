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
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x75660ad7, "dev_change_flags" },
	{ 0x45176ba2, "unregister_netdevice" },
	{ 0xbcc2974f, "single_open" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0x2124ec5f, "seq_open" },
	{ 0xeafa8c92, "single_release" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x90b5b24, "seq_puts" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xe095afae, "rtnl_sem" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xd72e3480, "dev_get_by_name" },
	{ 0xc7df16b6, "skb_copy" },
	{ 0x604cf294, "seq_printf" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0xb2f7a1cc, "dev_base_lock" },
	{ 0x909a1f0a, "dev_set_allmulti" },
	{ 0x8d62799c, "alloc_netdev" },
	{ 0x1251d30f, "call_rcu" },
	{ 0xf263188a, "skb_realloc_headroom" },
	{ 0x996d9199, "seq_read" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0x41779942, "dev_mc_add" },
	{ 0x3797e731, "vlan_ioctl_set" },
	{ 0x2eb2d8e6, "netif_rx" },
	{ 0x5789f256, "proc_mkdir" },
	{ 0x5edb55b4, "proc_net" },
	{ 0xdd132261, "printk" },
	{ 0x63b77250, "free_netdev" },
	{ 0xd5614e73, "dev_ethtool" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0xe9a60ad6, "__down_failed_trylock" },
	{ 0xb5ec86a8, "dev_base" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xdcf68363, "dev_remove_pack" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xeaa293d0, "dev_mc_delete" },
	{ 0x7dceceac, "capable" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x40e53e4, "arp_find" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0x32f96b73, "netdev_state_change" },
	{ 0xec034e5, "_read_unlock" },
	{ 0xf1442b3e, "seq_lseek" },
	{ 0x60c08a36, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xc304bda3, "unregister_netdev" },
	{ 0xaf25400d, "snprintf" },
	{ 0x69ef124c, "dev_add_pack" },
	{ 0x245b0ca0, "seq_release" },
	{ 0xa3a5be95, "memmove" },
	{ 0xb55a54e, "dev_queue_xmit" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B3128FE90B96609229E80E6");
