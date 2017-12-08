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
	{ 0xb40671f9, "gameport_register_port" },
	{ 0xbe07abd6, "snd_pcm_period_elapsed" },
	{ 0x816c2d51, "snd_pcm_hw_constraint_msbits" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xb3a804c1, "snd_opl3_hwdep_new" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0x5328434, "snd_pcm_lib_preallocate_free_for_all" },
	{ 0xe243dde3, "copy_to_user_fromio" },
	{ 0x93878ece, "snd_pcm_format_big_endian" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x806d5133, "param_array_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x748e788b, "pci_release_regions" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x396007fc, "snd_rawmidi_set_ops" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4047ee1e, "snd_rawmidi_new" },
	{ 0x627587c3, "snd_pcm_suspend_all" },
	{ 0x754b605a, "snd_opl3_init" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0xf40c1abb, "snd_opl3_new" },
	{ 0x7413458e, "snd_device_new" },
	{ 0xdd132261, "printk" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x24dc0620, "snd_card_set_pm_callback" },
	{ 0x26f4c679, "snd_pcm_set_ops" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xca23bc51, "snd_card_pci_suspend" },
	{ 0x28464707, "snd_pcm_lib_free_pages" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb34ec404, "snd_pcm_lib_ioctl" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xc7ad3b0, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x2f0b152f, "snd_iprintf" },
	{ 0xb3f07c30, "snd_ac97_suspend" },
	{ 0x86dd62b9, "snd_card_new" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0x5271af5d, "request_irq" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x4eb07d95, "snd_ctl_new1" },
	{ 0xbdae6f9d, "gameport_unregister_port" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0x455dee72, "snd_pcm_set_sync" },
	{ 0x1843d8ae, "snd_ac97_bus" },
	{ 0xe1264259, "snd_card_pci_resume" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x9382ccd4, "pci_set_power_state" },
	{ 0x418c38c, "snd_ac97_mixer" },
	{ 0x37a0cba, "kfree" },
	{ 0xab491452, "pci_request_regions" },
	{ 0x95a60aa5, "snd_pcm_format_unsigned" },
	{ 0xedc03953, "iounmap" },
	{ 0x597c8e97, "snd_card_proc_new" },
	{ 0x7689741b, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x6c1e877, "snd_card_free" },
	{ 0x9f2954ad, "snd_card_register" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xd423dec7, "snd_pcm_new" },
	{ 0xa22a531e, "snd_ac97_resume" },
	{ 0x7bce63a8, "snd_ctl_add" },
	{ 0x5d89bbb7, "snd_rawmidi_transmit" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x73da131d, "snd_rawmidi_receive" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x90b9a166, "pci_register_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,gameport,snd-opl3-lib,snd,snd-rawmidi,snd-ac97-codec";

MODULE_ALIAS("pci:v00001013d00006005sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "50BC4407311158E9E5714F6");