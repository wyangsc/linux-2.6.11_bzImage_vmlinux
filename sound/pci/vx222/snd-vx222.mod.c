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
	{ 0x60e82cb2, "snd_vx_delay" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0x67b693c9, "snd_vx_dsp_boot" },
	{ 0x806d5133, "param_array_get" },
	{ 0x594ea6d7, "snd_vx_dsp_load" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x748e788b, "pci_release_regions" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0x7413458e, "snd_device_new" },
	{ 0xdd132261, "printk" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xca23bc51, "snd_card_pci_suspend" },
	{ 0x86dd62b9, "snd_card_new" },
	{ 0x35d0ab85, "snd_vx_create" },
	{ 0xa1fdbe0c, "snd_vx_irq_handler" },
	{ 0x5271af5d, "request_irq" },
	{ 0x4eb07d95, "snd_ctl_new1" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0xe1264259, "snd_card_pci_resume" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x37a0cba, "kfree" },
	{ 0xab491452, "pci_request_regions" },
	{ 0xe43583a1, "snd_vx_setup_firmware" },
	{ 0x6c1e877, "snd_card_free" },
	{ 0x9f2954ad, "snd_card_register" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x7bce63a8, "snd_ctl_add" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x90b9a166, "pci_register_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-vx-lib,snd";

MODULE_ALIAS("pci:v000010B5d00009050sv00001369sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv00001369sd*bc*sc*i*");

MODULE_INFO(srcversion, "693BB5EA2E52C6CBFFB0891");
