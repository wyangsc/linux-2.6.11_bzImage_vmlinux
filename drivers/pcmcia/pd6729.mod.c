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
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0x90b9a166, "pci_register_driver" },
	{ 0xbbbc4a01, "pcmcia_socket_dev_resume" },
	{ 0xf4e120f4, "pcmcia_socket_dev_suspend" },
	{ 0x37a0cba, "kfree" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0x748e788b, "pci_release_regions" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0xd4ee516a, "pcmcia_unregister_socket" },
	{ 0xe69ab3c, "pcmcia_register_socket" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0xf38e9c12, "pccard_nonstatic_ops" },
	{ 0xab491452, "pci_request_regions" },
	{ 0x710782cf, "pci_bus_write_config_byte" },
	{ 0xb57edf8f, "pci_bus_read_config_byte" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x5271af5d, "request_irq" },
	{ 0xcf97f3bd, "dead_socket" },
	{ 0x79312f78, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf9d2ab4b, "pcmcia_parse_events" },
	{ 0xdd132261, "printk" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=rsrc_nonstatic";

MODULE_ALIAS("pci:v00001013d00001100sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "68B5533F550F0D5F69EDA2B");
