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
	{ 0x1b763d8b, "snd_info_unregister" },
	{ 0x25ec1b28, "strlen" },
	{ 0xf7c47543, "snd_info_create_card_entry" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7413458e, "snd_device_new" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x2f0b152f, "snd_iprintf" },
	{ 0x61651be, "strcat" },
	{ 0x89e1d460, "snd_pcm_hw_rule_add" },
	{ 0x9d27756, "snd_component_add" },
	{ 0x6cfe6c1c, "pci_bus_read_config_word" },
	{ 0xc6957e75, "snd_ctl_remove_id" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x4eb07d95, "snd_ctl_new1" },
	{ 0x9da34ad5, "snd_ctl_find_id" },
	{ 0x1070ed29, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0x93dc5678, "snd_info_free_entry" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x7bce63a8, "snd_ctl_add" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x4e193abf, "snd_info_register" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd,snd-pcm";


MODULE_INFO(srcversion, "6560356E1EFDA6322D86CFD");
