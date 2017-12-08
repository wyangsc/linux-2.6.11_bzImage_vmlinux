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
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x44c527e7, "usb_deregister" },
	{ 0xa30aea4a, "usb_register" },
	{ 0x797976f6, "hci_unregister_dev" },
	{ 0xfbcbe92, "hci_free_dev" },
	{ 0x20fd144, "hci_register_dev" },
	{ 0x29468c7, "hci_alloc_dev" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0x29956b63, "skb_queue_purge" },
	{ 0xb6e8051d, "_write_unlock_irqrestore" },
	{ 0x2fd13df7, "usb_kill_urb" },
	{ 0x944335f7, "_write_lock_irqsave" },
	{ 0x15529b4d, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x67d6f733, "usb_alloc_urb" },
	{ 0xec034e5, "_read_unlock" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0x5facaf26, "skb_queue_head" },
	{ 0x10b3c308, "usb_submit_urb" },
	{ 0x904f7240, "skb_dequeue" },
	{ 0xdd132261, "printk" },
	{ 0xf397b9aa, "__tasklet_schedule" },
	{ 0x9af738e3, "skb_queue_tail" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x6067a146, "memcpy" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x864dbdf6, "alloc_skb" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v08FDp0002dl*dh*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "3D53336ED753B74D96C8B11");
