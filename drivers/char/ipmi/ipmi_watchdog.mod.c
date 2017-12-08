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
	{ 0xffdfe686, "ipmi_smi_watcher_unregister" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x55b3bf05, "misc_deregister" },
	{ 0x3980aac1, "unregister_reboot_notifier" },
	{ 0xf099679c, "notifier_chain_unregister" },
	{ 0x60cec3b9, "notifier_chain_register" },
	{ 0xd5eeb25, "panic_notifier_list" },
	{ 0x1cc6719a, "register_reboot_notifier" },
	{ 0xa856ec9d, "ipmi_smi_watcher_register" },
	{ 0x3d130f90, "__up_write" },
	{ 0x99dca307, "ipmi_destroy_user" },
	{ 0xe2193e8c, "misc_register" },
	{ 0x64c1b8d6, "ipmi_get_version" },
	{ 0x62a8a584, "ipmi_create_user" },
	{ 0x35c9e4e2, "__down_write" },
	{ 0x82328328, "kill_fasync" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x1075bf0, "panic" },
	{ 0x9b89634b, "fasync_helper" },
	{ 0x3a8f9242, "nonseekable_open" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x926d701, "default_wake_function" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xdd132261, "printk" },
	{ 0x70ee2650, "ipmi_request_supply_msgs" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x93304684, "param_get_string" },
	{ 0x683a3221, "param_set_copystring" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ipmi_msghandler";


MODULE_INFO(srcversion, "A0181D22CF444E0C08D79F9");
