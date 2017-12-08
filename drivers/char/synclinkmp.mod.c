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
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0xd57d22c4, "tty_register_driver" },
	{ 0xd3c24827, "tty_set_operations" },
	{ 0x89ac5254, "tty_std_termios" },
	{ 0xbbdaf16e, "alloc_tty_driver" },
	{ 0x90b9a166, "pci_register_driver" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0x802305c9, "put_tty_driver" },
	{ 0x307302b3, "tty_unregister_driver" },
	{ 0x5271af5d, "request_irq" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xedc03953, "iounmap" },
	{ 0xd49501d4, "__release_region" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0x9efed5af, "iomem_resource" },
	{ 0x3fa03a97, "memset" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x926d701, "default_wake_function" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x287649b2, "tty_get_baud_rate" },
	{ 0x37a0cba, "kfree" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xa85a79d, "tty_hangup" },
	{ 0xf7e086e2, "tty_flip_buffer_push" },
	{ 0xa54d35f6, "do_SAK" },
	{ 0x61651be, "strcat" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x93723505, "tty_wakeup" },
	{ 0x4af9e110, "del_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6067a146, "memcpy" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x12698c80, "tty_ldisc_flush" },
	{ 0x9cbd6990, "tty_wait_until_sent" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1f1eefa1, "interruptible_sleep_on" },
	{ 0x6df93d86, "tty_hung_up_p" },
	{ 0xdd132261, "printk" },
	{ 0x5f0d8ef1, "tty_ldisc_deref" },
	{ 0xc0d6656d, "tty_ldisc_ref" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000013C0d00000030sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "819DCEDE836643C37695799");
