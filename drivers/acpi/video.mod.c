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
	{ 0x8d148f27, "acpi_bus_unregister_driver" },
	{ 0xd4975872, "acpi_bus_register_driver" },
	{ 0x63763d40, "acpi_root_dir" },
	{ 0x2bb55d6e, "acpi_remove_notify_handler" },
	{ 0xe0977a3f, "acpi_bus_generate_event" },
	{ 0xabf18f58, "acpi_bus_get_device" },
	{ 0x43b9bbb4, "acpi_os_free" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xd9091363, "acpi_install_notify_handler" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0x5789f256, "proc_mkdir" },
	{ 0xfa4fc616, "seq_putc" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xbcc2974f, "single_open" },
	{ 0x604cf294, "seq_printf" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x2bfeb410, "acpi_get_handle" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd132261, "printk" },
	{ 0xd04b857d, "acpi_evaluate_object" },
	{ 0xc598bf3e, "acpi_evaluate_integer" },
	{ 0xeafa8c92, "single_release" },
	{ 0x996d9199, "seq_read" },
	{ 0xf1442b3e, "seq_lseek" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "16CC8D2B57CE16F69BEE73B");
