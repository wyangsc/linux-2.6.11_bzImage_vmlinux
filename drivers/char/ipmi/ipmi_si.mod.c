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
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x5331e1b5, "acpi_get_firmware_table" },
	{ 0x1c968b6b, "ipmi_register_smi" },
	{ 0x349cba85, "strchr" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x9efed5af, "iomem_resource" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xe84c21e3, "ipmi_smi_msg_received" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x1992a2ba, "param_set_long" },
	{ 0x597990c7, "ipmi_smi_watchdog_pretimeout" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x806d5133, "param_array_get" },
	{ 0x371f9f8, "pci_get_class" },
	{ 0xb07dfb3d, "acpi_remove_gpe_handler" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x40f2b10c, "ipmi_alloc_smi_msg" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x7d11c268, "jiffies" },
	{ 0x7c5ecf5c, "ipmi_smi_add_proc_entry" },
	{ 0x38355096, "ipmi_unregister_smi" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0xdd132261, "printk" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x61651be, "strcat" },
	{ 0xad036394, "synchronize_kernel" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x6cfe6c1c, "pci_bus_read_config_word" },
	{ 0x53a21daf, "param_get_long" },
	{ 0x5271af5d, "request_irq" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x683a3221, "param_set_copystring" },
	{ 0xd49501d4, "__release_region" },
	{ 0xf666cbb3, "__memcpy_fromio" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0xbb46e5ea, "pci_get_device" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xf1b44169, "pci_dev_put" },
	{ 0x93304684, "param_get_string" },
	{ 0x2aff2f4, "acpi_install_gpe_handler" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ipmi_msghandler";


MODULE_INFO(srcversion, "FD587B8B12909C5A17B5127");
