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
	{ 0x55b3bf05, "misc_deregister" },
	{ 0xe2193e8c, "misc_register" },
	{ 0x56d862eb, "no_llseek" },
	{ 0x45176ba2, "unregister_netdevice" },
	{ 0x29956b63, "skb_queue_purge" },
	{ 0xf7fca878, "f_setown" },
	{ 0x9b89634b, "fasync_helper" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xe914e41e, "strcpy" },
	{ 0xbaa6844c, "register_netdevice" },
	{ 0xc49c3553, "dev_alloc_name" },
	{ 0x349cba85, "strchr" },
	{ 0x8d62799c, "alloc_netdev" },
	{ 0x4a2211d2, "__dev_get_by_name" },
	{ 0x7dceceac, "capable" },
	{ 0x85abc85f, "strncmp" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xdd132261, "printk" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xe9a60ad6, "__down_failed_trylock" },
	{ 0xe095afae, "rtnl_sem" },
	{ 0x63b77250, "free_netdev" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x71dc558c, "skb_copy_datagram_iovec" },
	{ 0x2876a6d3, "memcpy_toiovec" },
	{ 0x6067a146, "memcpy" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
	{ 0x1000e51, "schedule" },
	{ 0x904f7240, "skb_dequeue" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x926d701, "default_wake_function" },
	{ 0xcdf45b94, "netif_rx_ni" },
	{ 0xdeca8456, "eth_type_trans" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x36139a51, "memcpy_fromiovec" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa0ad243e, "ether_setup" },
	{ 0xbaeb160c, "bitreverse" },
	{ 0x92ea4ae4, "crc32_le" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x82328328, "kill_fasync" },
	{ 0x7d11c268, "jiffies" },
	{ 0x9af738e3, "skb_queue_tail" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "83BBCCD4672AF5506AA1955");
