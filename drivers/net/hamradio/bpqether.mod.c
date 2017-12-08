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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0xdcf68363, "dev_remove_pack" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x69ef124c, "dev_add_pack" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0x5edb55b4, "proc_net" },
	{ 0xfa1d5917, "dev_close" },
	{ 0x85abc85f, "strncmp" },
	{ 0x45176ba2, "unregister_netdevice" },
	{ 0xbaa6844c, "register_netdevice" },
	{ 0xc49c3553, "dev_alloc_name" },
	{ 0x8d62799c, "alloc_netdev" },
	{ 0x23fe9907, "ax25_rebuild_header" },
	{ 0x7fe7d33a, "ax25_encapsulate" },
	{ 0x63b77250, "free_netdev" },
	{ 0x245b0ca0, "seq_release" },
	{ 0x996d9199, "seq_read" },
	{ 0xf1442b3e, "seq_lseek" },
	{ 0x2124ec5f, "seq_open" },
	{ 0x604cf294, "seq_printf" },
	{ 0x90b5b24, "seq_puts" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x7dceceac, "capable" },
	{ 0x6067a146, "memcpy" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
	{ 0xb55a54e, "dev_queue_xmit" },
	{ 0x7dd4a7a7, "sock_wfree" },
	{ 0xdd132261, "printk" },
	{ 0xf263188a, "skb_realloc_headroom" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x7d11c268, "jiffies" },
	{ 0x2eb2d8e6, "netif_rx" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0xd0f95f2, "___pskb_trim" },
	{ 0xa7ed457a, "pskb_expand_head" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xe7a331d5, "__pskb_pull_tail" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0xdbc29be8, "skb_clone" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ax25";


MODULE_INFO(srcversion, "398BE69224A8DC13F638384");
