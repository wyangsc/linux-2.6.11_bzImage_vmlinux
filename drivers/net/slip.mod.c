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
	{ 0xa85a79d, "tty_hangup" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xd5255c28, "tty_register_ldisc" },
	{ 0x90bd2c3a, "n_tty_ioctl" },
	{ 0x4af9e110, "del_timer" },
	{ 0x79312f78, "mod_timer" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0xbaa6844c, "register_netdevice" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x7dceceac, "capable" },
	{ 0x8d62799c, "alloc_netdev" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x45176ba2, "unregister_netdevice" },
	{ 0xfa1d5917, "dev_close" },
	{ 0x63b77250, "free_netdev" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x76135e6c, "slhc_compress" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
	{ 0x7d11c268, "jiffies" },
	{ 0x2eb2d8e6, "netif_rx" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0xbc55868, "slhc_remember" },
	{ 0x3bc1319e, "slhc_uncompress" },
	{ 0x6067a146, "memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x2894cfb0, "slhc_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0x66bcc308, "_spin_lock_bh" },
	{ 0x2e0e927f, "slhc_init" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7609CFEBC7EC894463EB2C3");
