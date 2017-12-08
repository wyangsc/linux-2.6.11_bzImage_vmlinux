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
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x11d10051, "ebt_unregister_watcher" },
	{ 0xc65ca1ae, "sock_release" },
	{ 0x6a1f6d0c, "ebt_register_watcher" },
	{ 0x307ba9ce, "netlink_kernel_create" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x29dfa6d0, "skb_copy_bits" },
	{ 0xe914e41e, "strcpy" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0xdd132261, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0x66bcc308, "_spin_lock_bh" },
	{ 0x2a8ad3cf, "netlink_broadcast" },
	{ 0x4af9e110, "del_timer" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0x8abac70a, "param_set_uint" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ebtables";


MODULE_INFO(srcversion, "D293B88EB4FAC67B14CA23D");
