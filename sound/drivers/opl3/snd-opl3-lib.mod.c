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
	{ 0x1a1a4f09, "__request_region" },
	{ 0x20ba2fb0, "kcalloc" },
	{ 0x814e8407, "release_resource" },
	{ 0xf92e61e3, "snd_device_free" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0x7413458e, "snd_device_new" },
	{ 0x4bc3ca36, "snd_timer_new" },
	{ 0xdd132261, "printk" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x47b31274, "snd_hwdep_new" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x37a0cba, "kfree" },
	{ 0x85af2f64, "snd_timer_interrupt" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x8479d154, "snd_seq_device_new" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd,snd-timer,snd-hwdep,snd-seq-device";


MODULE_INFO(srcversion, "039F1B3430D59BFC1A109F2");
