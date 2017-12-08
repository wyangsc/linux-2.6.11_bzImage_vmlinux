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
	{ 0xa856ec9d, "ipmi_smi_watcher_register" },
	{ 0x60a32ea9, "pm_power_off" },
	{ 0x99dca307, "ipmi_destroy_user" },
	{ 0x62a8a584, "ipmi_create_user" },
	{ 0x1ba07260, "ipmi_user_set_run_to_completion" },
	{ 0xdd132261, "printk" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x70ee2650, "ipmi_request_supply_msgs" },
	{ 0x1042cbb5, "__up_wakeup" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ipmi_msghandler";


MODULE_INFO(srcversion, "5C5056DEAB6D03825BDF39B");
