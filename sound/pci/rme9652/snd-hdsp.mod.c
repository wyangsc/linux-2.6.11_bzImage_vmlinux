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
	{ 0x408d4f3, "__mod_timer" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x4af9e110, "del_timer" },
	{ 0xbe07abd6, "snd_pcm_period_elapsed" },
	{ 0xebbd4a0d, "snd_dma_alloc_pages" },
	{ 0x816c2d51, "snd_pcm_hw_constraint_msbits" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0x267fc65b, "__tasklet_hi_schedule" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x806d5133, "param_array_get" },
	{ 0xb661a635, "_snd_pcm_hw_param_setempty" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x748e788b, "pci_release_regions" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x396007fc, "snd_rawmidi_set_ops" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4047ee1e, "snd_rawmidi_new" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0xd1986f0d, "snd_dma_get_reserved_buf" },
	{ 0x3fa03a97, "memset" },
	{ 0x9391d7f0, "snd_pcm_hw_constraint_list" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x26f4c679, "snd_pcm_set_ops" },
	{ 0xfe1acc30, "snd_ctl_notify" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x47b31274, "snd_hwdep_new" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0xb34ec404, "snd_pcm_lib_ioctl" },
	{ 0xdc76d1ad, "snd_interval_list" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2f0b152f, "snd_iprintf" },
	{ 0x86dd62b9, "snd_card_new" },
	{ 0x89e1d460, "snd_pcm_hw_rule_add" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0x6cfe6c1c, "pci_bus_read_config_word" },
	{ 0x5271af5d, "request_irq" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x4eb07d95, "snd_ctl_new1" },
	{ 0xd01c9506, "snd_dma_free_pages" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0x455dee72, "snd_pcm_set_sync" },
	{ 0x61e0549, "snd_dma_reserve_buf" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x710782cf, "pci_bus_write_config_byte" },
	{ 0x1070ed29, "snd_interval_refine" },
	{ 0xab491452, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x1166731b, "request_firmware" },
	{ 0x597c8e97, "snd_card_proc_new" },
	{ 0x6c1e877, "snd_card_free" },
	{ 0x9f2954ad, "snd_card_register" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xd423dec7, "snd_pcm_new" },
	{ 0x7bce63a8, "snd_ctl_add" },
	{ 0x5d89bbb7, "snd_rawmidi_transmit" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0xbbea2ad8, "snd_rawmidi_transmit_empty" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x6ef56f31, "release_firmware" },
	{ 0x73da131d, "snd_rawmidi_receive" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x90b9a166, "pci_register_driver" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-page-alloc,snd-rawmidi,snd,snd-hwdep";

MODULE_ALIAS("pci:v000010EEd00003FC5sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FCCD8E76BF1E14712625B24");
