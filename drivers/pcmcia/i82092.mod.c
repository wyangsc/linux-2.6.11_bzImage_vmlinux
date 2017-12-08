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
	{ 0xcf97f3bd, "dead_socket" },
	{ 0xf9d2ab4b, "pcmcia_parse_events" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0xd49501d4, "__release_region" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xd4ee516a, "pcmcia_unregister_socket" },
	{ 0xe69ab3c, "pcmcia_register_socket" },
	{ 0xf38e9c12, "pccard_nonstatic_ops" },
	{ 0x5271af5d, "request_irq" },
	{ 0x710782cf, "pci_bus_write_config_byte" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0xdd132261, "printk" },
	{ 0xb57edf8f, "pci_bus_read_config_byte" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0xbbbc4a01, "pcmcia_socket_dev_resume" },
	{ 0xf4e120f4, "pcmcia_socket_dev_suspend" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=rsrc_nonstatic";

MODULE_ALIAS("pci:v00008086d00001221sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5EE087F739E9058C63B4A1B");
