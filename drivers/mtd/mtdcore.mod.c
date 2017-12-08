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
	{ 0xc0014b1a, "module_refcount" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xdd132261, "printk" },
	{ 0x2e1bf603, "pm_unregister" },
	{ 0xe9a60ad6, "__down_failed_trylock" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0xabc32741, "wake_up_process" },
	{ 0x2099274a, "pm_register" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F62AFA7CB396B33973AE1AE");
