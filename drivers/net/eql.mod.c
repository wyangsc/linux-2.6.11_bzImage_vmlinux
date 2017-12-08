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
	{ 0x63b77250, "free_netdev" },
	{ 0x5c0ef408, "register_netdev" },
	{ 0x8d62799c, "alloc_netdev" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xd72e3480, "dev_get_by_name" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0xb55a54e, "dev_queue_xmit" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x7dceceac, "capable" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd132261, "printk" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0x66bcc308, "_spin_lock_bh" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4A527D8C9FC4BB174AE214D");
