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
	{ 0x748e788b, "pci_release_regions" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xedc03953, "iounmap" },
	{ 0x802305c9, "put_tty_driver" },
	{ 0x307302b3, "tty_unregister_driver" },
	{ 0x4af9e110, "del_timer" },
	{ 0x1075bf0, "panic" },
	{ 0xd57d22c4, "tty_register_driver" },
	{ 0xd3c24827, "tty_set_operations" },
	{ 0x89ac5254, "tty_std_termios" },
	{ 0x9f984513, "strrchr" },
	{ 0x349cba85, "strchr" },
	{ 0xbbdaf16e, "alloc_tty_driver" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x710782cf, "pci_bus_write_config_byte" },
	{ 0x5271af5d, "request_irq" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xab491452, "pci_request_regions" },
	{ 0xb57edf8f, "pci_bus_read_config_byte" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0xbb46e5ea, "pci_get_device" },
	{ 0x7dceceac, "capable" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x287649b2, "tty_get_baud_rate" },
	{ 0x6067a146, "memcpy" },
	{ 0x12698c80, "tty_ldisc_flush" },
	{ 0x9cbd6990, "tty_wait_until_sent" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x1f1eefa1, "interruptible_sleep_on" },
	{ 0x6df93d86, "tty_hung_up_p" },
	{ 0x926d701, "default_wake_function" },
	{ 0xdd132261, "printk" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x900b315c, "get_zeroed_page" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x9a95b07f, "schedule_delayed_work" },
	{ 0xa54d35f6, "do_SAK" },
	{ 0x7d11c268, "jiffies" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x93723505, "tty_wakeup" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xa85a79d, "tty_hangup" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "22B8FC103F92958F487119C");
