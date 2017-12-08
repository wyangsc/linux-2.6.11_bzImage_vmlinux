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
	{ 0x2b382d80, "snd_sbdsp_create" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xb40671f9, "gameport_register_port" },
	{ 0x814e8407, "release_resource" },
	{ 0xbe07abd6, "snd_pcm_period_elapsed" },
	{ 0xb3a804c1, "snd_opl3_hwdep_new" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0x5328434, "snd_pcm_lib_preallocate_free_for_all" },
	{ 0x600f69fc, "snd_mpu401_uart_new" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x806d5133, "param_array_get" },
	{ 0x748e788b, "pci_release_regions" },
	{ 0xedb7f3f8, "pci_bus_write_config_word" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xe990edd3, "snd_sbmixer_read" },
	{ 0xe2c5f868, "snd_pcm_format_signed" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0x93762478, "snd_mpu401_uart_interrupt" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0xdd132261, "printk" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x26f4c679, "snd_pcm_set_ops" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x28464707, "snd_pcm_lib_free_pages" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb34ec404, "snd_pcm_lib_ioctl" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xc7ad3b0, "snd_pcm_lib_malloc_pages" },
	{ 0x86dd62b9, "snd_card_new" },
	{ 0x6cfe6c1c, "pci_bus_read_config_word" },
	{ 0xbdae6f9d, "gameport_unregister_port" },
	{ 0x7e3c44ed, "snd_sbmixer_new" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x1d6f8bf1, "snd_opl3_create" },
	{ 0x6faae25b, "snd_sbdsp_command" },
	{ 0xa8edfa41, "snd_pcm_format_physical_width" },
	{ 0x37a0cba, "kfree" },
	{ 0xab491452, "pci_request_regions" },
	{ 0x7689741b, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x6c1e877, "snd_card_free" },
	{ 0x9f2954ad, "snd_card_register" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xd423dec7, "snd_pcm_new" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x32248e6d, "pci_set_consistent_dma_mask" },
	{ 0xe04c5d82, "snd_sbmixer_write" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0x90b9a166, "pci_register_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-sb-common,gameport,snd-pcm,snd-opl3-lib,snd-mpu401-uart,snd";

MODULE_ALIAS("pci:v00004005d00004000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C1E7348BE0528469F021975");
