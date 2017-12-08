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
	{ 0x20ba2fb0, "kcalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x7413458e, "snd_device_new" },
	{ 0x2f0b152f, "snd_iprintf" },
	{ 0x9d27756, "snd_component_add" },
	{ 0x4eb07d95, "snd_ctl_new1" },
	{ 0x37a0cba, "kfree" },
	{ 0x597c8e97, "snd_card_proc_new" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7bce63a8, "snd_ctl_add" },
	{ 0x7a7ef853, "__down_failed" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "4932E5D8BF1B5317B07D632");
