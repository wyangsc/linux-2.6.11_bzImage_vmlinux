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
	{ 0x5facaf26, "skb_queue_head" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x90bd2c3a, "n_tty_ioctl" },
	{ 0x4af9e110, "del_timer" },
	{ 0x20fd144, "hci_register_dev" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x797976f6, "hci_unregister_dev" },
	{ 0x7d11c268, "jiffies" },
	{ 0x29956b63, "skb_queue_purge" },
	{ 0xdd132261, "printk" },
	{ 0x12698c80, "tty_ldisc_flush" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xf397b9aa, "__tasklet_schedule" },
	{ 0x29468c7, "hci_alloc_dev" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x79312f78, "mod_timer" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x9af738e3, "skb_queue_tail" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0xd0f95f2, "___pskb_trim" },
	{ 0x904f7240, "skb_dequeue" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xfbcbe92, "hci_free_dev" },
	{ 0xd5255c28, "tty_register_ldisc" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "F35556ABDC9B51316FBECA5");
