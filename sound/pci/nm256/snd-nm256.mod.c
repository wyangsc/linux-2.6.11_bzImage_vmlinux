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
	{ 0x1a1a4f09, "__request_region" },
	{ 0xf9a482f9, "msleep" },
	{ 0x20ba2fb0, "kcalloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x9efed5af, "iomem_resource" },
	{ 0x814e8407, "release_resource" },
	{ 0x518bb7f8, "copy_from_user_toio" },
	{ 0x4327f0d5, "memset_io" },
	{ 0xbe07abd6, "snd_pcm_period_elapsed" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0xe243dde3, "copy_to_user_fromio" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x806d5133, "param_array_get" },
	{ 0xd186c381, "snd_pcm_lib_mmap_iomem" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x627587c3, "snd_pcm_suspend_all" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x7413458e, "snd_device_new" },
	{ 0x9391d7f0, "snd_pcm_hw_constraint_list" },
	{ 0x5252f304, "__memcpy_toio" },
	{ 0xdd132261, "printk" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x24dc0620, "snd_card_set_pm_callback" },
	{ 0x26f4c679, "snd_pcm_set_ops" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xca23bc51, "snd_card_pci_suspend" },
	{ 0xb34ec404, "snd_pcm_lib_ioctl" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xb3f07c30, "snd_ac97_suspend" },
	{ 0x86dd62b9, "snd_card_new" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0x6cfe6c1c, "pci_bus_read_config_word" },
	{ 0x5271af5d, "request_irq" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0x455dee72, "snd_pcm_set_sync" },
	{ 0x1843d8ae, "snd_ac97_bus" },
	{ 0xe1264259, "snd_card_pci_resume" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x418c38c, "snd_ac97_mixer" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x6c1e877, "snd_card_free" },
	{ 0x9f2954ad, "snd_card_register" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xd423dec7, "snd_pcm_new" },
	{ 0xa22a531e, "snd_ac97_resume" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x90b9a166, "pci_register_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd,snd-ac97-codec";

MODULE_ALIAS("pci:v000010C8d00008005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010C8d00008006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010C8d00008016sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "81DE625C8018983B14BE22C");
