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
	{ 0x307302b3, "tty_unregister_driver" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x802305c9, "put_tty_driver" },
	{ 0xd57d22c4, "tty_register_driver" },
	{ 0xd3c24827, "tty_set_operations" },
	{ 0x89ac5254, "tty_std_termios" },
	{ 0xbbdaf16e, "alloc_tty_driver" },
	{ 0xd49501d4, "__release_region" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0x1efb28e1, "pci_find_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xab2b15ff, "pci_bus_read_config_dword" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x6067a146, "memcpy" },
	{ 0xccd52b12, "__down_failed_interruptible" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7dceceac, "capable" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x12698c80, "tty_ldisc_flush" },
	{ 0x9cbd6990, "tty_wait_until_sent" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x9016dd82, "__get_free_pages" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x1f1eefa1, "interruptible_sleep_on" },
	{ 0x6df93d86, "tty_hung_up_p" },
	{ 0x926d701, "default_wake_function" },
	{ 0x287649b2, "tty_get_baud_rate" },
	{ 0x6a7538b6, "tty_register_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x79312f78, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xa85a79d, "tty_hangup" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x93723505, "tty_wakeup" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xdd132261, "printk" },
	{ 0x5f0d8ef1, "tty_ldisc_deref" },
	{ 0x3fa03a97, "memset" },
	{ 0xc0d6656d, "tty_ldisc_ref" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x7ded8240, "param_get_ulong" },
	{ 0x66eaa8a9, "param_set_ulong" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2D20434D74B0E6B83AE8929");
