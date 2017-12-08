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
	{ 0x89b301d4, "param_get_int" },
	{ 0xbe07abd6, "snd_pcm_period_elapsed" },
	{ 0x2bf49c7, "snd_pcm_hw_constraint_ratnums" },
	{ 0xebbd4a0d, "snd_dma_alloc_pages" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x806d5133, "param_array_get" },
	{ 0x748e788b, "pci_release_regions" },
	{ 0xedb7f3f8, "pci_bus_write_config_word" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xa28347b8, "snd_pcm_hw_constraint_integer" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0x8f024930, "snd_pcm_sgbuf_ops_page" },
	{ 0x7413458e, "snd_device_new" },
	{ 0xdd132261, "printk" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x26f4c679, "snd_pcm_set_ops" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x28464707, "snd_pcm_lib_free_pages" },
	{ 0xb34ec404, "snd_pcm_lib_ioctl" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xc7ad3b0, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x86dd62b9, "snd_card_new" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0x6cfe6c1c, "pci_bus_read_config_word" },
	{ 0x5271af5d, "request_irq" },
	{ 0x4eb07d95, "snd_ctl_new1" },
	{ 0xd01c9506, "snd_dma_free_pages" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0xa8edfa41, "snd_pcm_format_physical_width" },
	{ 0x37a0cba, "kfree" },
	{ 0xab491452, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x7689741b, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x6c1e877, "snd_card_free" },
	{ 0x7f4dcfea, "pci_match_device" },
	{ 0x9f2954ad, "snd_card_register" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xd423dec7, "snd_pcm_new" },
	{ 0x7bce63a8, "snd_ctl_add" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x90b9a166, "pci_register_driver" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-page-alloc,snd";

MODULE_ALIAS("pci:v0000109Ed00000878sv00000070sd000013EBbc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000879sv00000070sd000013EBbc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00000070sd0000FF01bc*sc*i*");

MODULE_INFO(srcversion, "FB6AD3550E8DFA6B92AEEF6");
