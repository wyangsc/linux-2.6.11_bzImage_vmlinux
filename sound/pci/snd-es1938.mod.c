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
	{ 0x55eb2175, "snd_pcm_format_width" },
	{ 0x20ba2fb0, "kcalloc" },
	{ 0x36cf097c, "snd_opl3_timer_new" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xb40671f9, "gameport_register_port" },
	{ 0xbe07abd6, "snd_pcm_period_elapsed" },
	{ 0x2bf49c7, "snd_pcm_hw_constraint_ratnums" },
	{ 0xb3a804c1, "snd_opl3_hwdep_new" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0x5328434, "snd_pcm_lib_preallocate_free_for_all" },
	{ 0x600f69fc, "snd_mpu401_uart_new" },
	{ 0x806d5133, "param_array_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x748e788b, "pci_release_regions" },
	{ 0xedb7f3f8, "pci_bus_write_config_word" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x627587c3, "snd_pcm_suspend_all" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0x93762478, "snd_mpu401_uart_interrupt" },
	{ 0x7413458e, "snd_device_new" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0xdd132261, "printk" },
	{ 0x24dc0620, "snd_card_set_pm_callback" },
	{ 0x26f4c679, "snd_pcm_set_ops" },
	{ 0xfe1acc30, "snd_ctl_notify" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xca23bc51, "snd_card_pci_suspend" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xbfbbd8ac, "pci_bus_write_config_dword" },
	{ 0x28464707, "snd_pcm_lib_free_pages" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb34ec404, "snd_pcm_lib_ioctl" },
	{ 0xc7ad3b0, "snd_pcm_lib_malloc_pages" },
	{ 0x86dd62b9, "snd_card_new" },
	{ 0x5271af5d, "request_irq" },
	{ 0x4eb07d95, "snd_ctl_new1" },
	{ 0xbdae6f9d, "gameport_unregister_port" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0xe1264259, "snd_card_pci_resume" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x1d6f8bf1, "snd_opl3_create" },
	{ 0x37a0cba, "kfree" },
	{ 0xab491452, "pci_request_regions" },
	{ 0x95a60aa5, "snd_pcm_format_unsigned" },
	{ 0x65e34900, "snd_pcm_hw_constraint_minmax" },
	{ 0x7689741b, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x6c1e877, "snd_card_free" },
	{ 0x9f2954ad, "snd_card_register" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xd423dec7, "snd_pcm_new" },
	{ 0x7bce63a8, "snd_ctl_add" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x32248e6d, "pci_set_consistent_dma_mask" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x90b9a166, "pci_register_driver" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-opl3-lib,gameport,snd-mpu401-uart,snd";

MODULE_ALIAS("pci:v0000125Dd00001969sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4BF5E156D6C9757D8EDA189");
