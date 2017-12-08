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
	{ 0x1a1a4f09, "__request_region" },
	{ 0xb57edf8f, "pci_bus_read_config_byte" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x25ec1b28, "strlen" },
	{ 0x56d862eb, "no_llseek" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0xedb7f3f8, "pci_bus_write_config_word" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x3a8f9242, "nonseekable_open" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0x3fa03a97, "memset" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0x5252f304, "__memcpy_toio" },
	{ 0xdd132261, "printk" },
	{ 0xf397b9aa, "__tasklet_schedule" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0x672144bd, "strlcpy" },
	{ 0xbfbbd8ac, "pci_bus_write_config_dword" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0x6cfe6c1c, "pci_bus_read_config_word" },
	{ 0xab2b15ff, "pci_bus_read_config_dword" },
	{ 0x5271af5d, "request_irq" },
	{ 0xdbd4b92d, "register_chrdev" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0xd49501d4, "__release_region" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0xf666cbb3, "__memcpy_fromio" },
	{ 0x710782cf, "pci_bus_write_config_byte" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0x6067a146, "memcpy" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xedc03953, "iounmap" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x2974ead1, "DIVA_DIDD_Read" },
	{ 0x66bcc308, "_spin_lock_bh" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x954cbb26, "vsprintf" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x794186c, "proc_net_eicon" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x90b9a166, "pci_register_driver" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=divadidd";

MODULE_ALIAS("pci:v00001133d0000E010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E01Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E01Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "ED8470C249ADF2AA1908EB6");
