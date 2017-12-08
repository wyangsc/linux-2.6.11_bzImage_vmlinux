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
	{ 0x8b36d7a4, "driver_unregister" },
	{ 0x343ef03f, "driver_register" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x77d9374a, "platform_bus_type" },
	{ 0x406e0119, "usb_register_bus" },
	{ 0x5271af5d, "request_irq" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x14828c2, "usb_create_hcd" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0x9f8d7510, "platform_get_irq" },
	{ 0x9a202073, "usb_put_hcd" },
	{ 0xd49501d4, "__release_region" },
	{ 0x9efed5af, "iomem_resource" },
	{ 0x9fc50c6b, "platform_get_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xd79f6223, "usb_deregister_bus" },
	{ 0xc3788174, "usb_disconnect" },
	{ 0xf57c159d, "usb_register_root_hub" },
	{ 0x86712e75, "usb_alloc_dev" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x79312f78, "mod_timer" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x952d77fb, "usb_put_dev" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xdd132261, "printk" },
	{ 0x39a9f4c5, "usb_get_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x20ba2fb0, "kcalloc" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf9264eb4, "usb_hcd_giveback_urb" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2ee9fcdc, "_spin_lock" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4CE9BCC1EDE90544922A11C");
