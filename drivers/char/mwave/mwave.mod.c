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
	{ 0xce8a3e65, "unregister_serial" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x926d701, "default_wake_function" },
	{ 0xe2193e8c, "misc_register" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0xdd132261, "printk" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xc57f9693, "rtc_lock" },
	{ 0x5271af5d, "request_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xd49501d4, "__release_region" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x6067a146, "memcpy" },
	{ 0x4da212fb, "register_serial" },
	{ 0x4888a014, "__get_user_2" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x55b3bf05, "misc_deregister" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "16B6C253D3814FC813801A8");
