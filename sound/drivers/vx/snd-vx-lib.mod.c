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
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x20ba2fb0, "kcalloc" },
	{ 0xc6505343, "snd_pcm_hw_constraint_step" },
	{ 0xbe07abd6, "snd_pcm_period_elapsed" },
	{ 0x267fc65b, "__tasklet_hi_schedule" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x627587c3, "snd_pcm_suspend_all" },
	{ 0x3fa03a97, "memset" },
	{ 0xdd132261, "printk" },
	{ 0x24dc0620, "snd_card_set_pm_callback" },
	{ 0x26f4c679, "snd_pcm_set_ops" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0xb34ec404, "snd_pcm_lib_ioctl" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2f0b152f, "snd_iprintf" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x4eb07d95, "snd_ctl_new1" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x8bbdc311, "snd_pcm_format_little_endian" },
	{ 0xa8edfa41, "snd_pcm_format_physical_width" },
	{ 0x37a0cba, "kfree" },
	{ 0x1166731b, "request_firmware" },
	{ 0x597c8e97, "snd_card_proc_new" },
	{ 0x9f2954ad, "snd_card_register" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xd423dec7, "snd_pcm_new" },
	{ 0xec5b8587, "vmalloc_to_page" },
	{ 0x7bce63a8, "snd_ctl_add" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x6ef56f31, "release_firmware" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd";


MODULE_INFO(srcversion, "F553027C8323D68F712C9C6");
