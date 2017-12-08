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
	{ 0x1f1b676d, "scsi_host_put" },
	{ 0x9c22a070, "scsi_remove_host" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0xd49501d4, "__release_region" },
	{ 0x199f8774, "scsi_scan_host" },
	{ 0x1fd56ed2, "scsi_add_host" },
	{ 0xe7ccea08, "scsi_host_alloc" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x56e17f3c, "scsi_print_command" },
	{ 0x67f88938, "scsi_print_msg" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x9b05ea5c, "scsi_command_size" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xdd132261, "printk" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x5271af5d, "request_irq" },
	{ 0x9a95b07f, "schedule_delayed_work" },
	{ 0x760a0f4f, "yield" },
	{ 0x7d11c268, "jiffies" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000134Ad00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "04E7E241C326578B222BDBD");
