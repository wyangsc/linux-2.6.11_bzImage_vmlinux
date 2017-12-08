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
	{ 0x89b301d4, "param_get_int" },
	{ 0xbe07abd6, "snd_pcm_period_elapsed" },
	{ 0xfeecdf74, "snd_i2c_device_create" },
	{ 0x816c2d51, "snd_pcm_hw_constraint_msbits" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0x5328434, "snd_pcm_lib_preallocate_free_for_all" },
	{ 0x600f69fc, "snd_mpu401_uart_new" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xbf36fac2, "snd_ice1712_akm4xxx_build_controls" },
	{ 0x806d5133, "param_array_get" },
	{ 0x18f93a79, "snd_i2c_sendbytes" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x748e788b, "pci_release_regions" },
	{ 0xedb7f3f8, "pci_bus_write_config_word" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0x93762478, "snd_mpu401_uart_interrupt" },
	{ 0xb4134292, "snd_cs8427_reg_write" },
	{ 0x7413458e, "snd_device_new" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0x9391d7f0, "snd_pcm_hw_constraint_list" },
	{ 0xdd132261, "printk" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x26f4c679, "snd_pcm_set_ops" },
	{ 0xfe1acc30, "snd_ctl_notify" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x6640511e, "snd_akm4xxx_reset" },
	{ 0xf041bea2, "snd_cs8427_iec958_build" },
	{ 0x28464707, "snd_pcm_lib_free_pages" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb34ec404, "snd_pcm_lib_ioctl" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xc7ad3b0, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x2f0b152f, "snd_iprintf" },
	{ 0x61651be, "strcat" },
	{ 0x86dd62b9, "snd_card_new" },
	{ 0x54f6a38f, "snd_cs8427_create" },
	{ 0xce6dbcf1, "snd_ice1712_akm4xxx_free" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0xbd73d80d, "snd_i2c_bus_create" },
	{ 0x6cfe6c1c, "pci_bus_read_config_word" },
	{ 0x1ab52ebf, "snd_i2c_readbytes" },
	{ 0x5271af5d, "request_irq" },
	{ 0x4eb07d95, "snd_ctl_new1" },
	{ 0x1dae7bbb, "snd_cs8427_iec958_pcm" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0x455dee72, "snd_pcm_set_sync" },
	{ 0x1843d8ae, "snd_ac97_bus" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x418c38c, "snd_ac97_mixer" },
	{ 0x710782cf, "pci_bus_write_config_byte" },
	{ 0x8e56756b, "snd_ac97_set_rate" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0xab491452, "pci_request_regions" },
	{ 0x8d2ca9a, "snd_cs8427_iec958_active" },
	{ 0x9bc97f9a, "snd_akm4xxx_write" },
	{ 0x597c8e97, "snd_card_proc_new" },
	{ 0x7689741b, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x6c1e877, "snd_card_free" },
	{ 0x9f2954ad, "snd_card_register" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xd423dec7, "snd_pcm_new" },
	{ 0x7bce63a8, "snd_ctl_add" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x32248e6d, "pci_set_consistent_dma_mask" },
	{ 0x5a73adf7, "snd_ice1712_akm4xxx_init" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x90b9a166, "pci_register_driver" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-i2c,snd-mpu401-uart,snd-ice17xx-ak4xxx,snd-cs8427,snd,snd-ak4xxx-adda,snd-ac97-codec";

MODULE_ALIAS("pci:v00001412d00001712sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "48B8ECAB9FE4DAA686178F7");
