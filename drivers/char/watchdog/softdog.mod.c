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
	{ 0x55b3bf05, "misc_deregister" },
	{ 0x3980aac1, "unregister_reboot_notifier" },
	{ 0xe2193e8c, "misc_register" },
	{ 0x1cc6719a, "register_reboot_notifier" },
	{ 0x56d862eb, "no_llseek" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0x3a8f9242, "nonseekable_open" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xc0014b1a, "module_refcount" },
	{ 0x4af9e110, "del_timer" },
	{ 0x79312f78, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe6e3ef70, "machine_restart" },
	{ 0xdd132261, "printk" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "592029B93ADF043BD202F8F");
