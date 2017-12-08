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
	{ 0xc304bda3, "unregister_netdev" },
	{ 0x93671e8c, "inet_del_protocol" },
	{ 0x5c0ef408, "register_netdev" },
	{ 0x7c3acc60, "inet_add_protocol" },
	{ 0xb5f5eb54, "__dev_get_by_index" },
	{ 0xe914e41e, "strcpy" },
	{ 0xfde5a107, "in_dev_finish_destroy" },
	{ 0xba5dc88f, "ip_mc_dec_group" },
	{ 0x502dad5b, "inetdev_by_index" },
	{ 0x280c4b8d, "ip_mc_inc_group" },
	{ 0x45176ba2, "unregister_netdevice" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x32f96b73, "netdev_state_change" },
	{ 0x6067a146, "memcpy" },
	{ 0x7dceceac, "capable" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x3a1f4bb7, "nf_hook_slow" },
	{ 0x78b1fd2, "nf_hooks" },
	{ 0xa37b7441, "ip_send_check" },
	{ 0x5274f725, "__ip_select_ident" },
	{ 0xe5e298ea, "ip_compute_csum" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0x7dd4a7a7, "sock_wfree" },
	{ 0xf263188a, "skb_realloc_headroom" },
	{ 0x2c2fa4b6, "ip_route_output_key" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x53d5e16f, "icmp_send" },
	{ 0x2eb2d8e6, "netif_rx" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xdd132261, "printk" },
	{ 0xf1e29eae, "csum_partial" },
	{ 0x173cdeb6, "__secpath_destroy" },
	{ 0x979bdf32, "skb_checksum" },
	{ 0xe7a331d5, "__pskb_pull_tail" },
	{ 0xec034e5, "_read_unlock" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0x63b77250, "free_netdev" },
	{ 0xbaa6844c, "register_netdevice" },
	{ 0x8d62799c, "alloc_netdev" },
	{ 0x4a2211d2, "__dev_get_by_name" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x672144bd, "strlcpy" },
	{ 0xca13d8c8, "_write_unlock_bh" },
	{ 0xae86307, "_write_lock_bh" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C9DD16E400477D92A0D171F");
