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
	{ 0xfeecdf74, "snd_i2c_device_create" },
	{ 0x18f93a79, "snd_i2c_sendbytes" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xdd132261, "printk" },
	{ 0xfe1acc30, "snd_ctl_notify" },
	{ 0xcc01b4ea, "snd_i2c_device_free" },
	{ 0x1ab52ebf, "snd_i2c_readbytes" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x4eb07d95, "snd_ctl_new1" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7bce63a8, "snd_ctl_add" },
	{ 0x7a7ef853, "__down_failed" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-i2c,snd";


MODULE_INFO(srcversion, "2CF9C542F4D20C7EC0D7DD0");
