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
	{ 0x5789f256, "proc_mkdir" },
	{ 0x63763d40, "acpi_root_dir" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x2bb55d6e, "acpi_remove_notify_handler" },
	{ 0x37a0cba, "kfree" },
	{ 0xd9091363, "acpi_install_notify_handler" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x244fe9e2, "acpi_bus_get_status" },
	{ 0x43b9bbb4, "acpi_os_free" },
	{ 0x85abc85f, "strncmp" },
	{ 0x739d56f1, "acpi_get_table" },
	{ 0xe0977a3f, "acpi_bus_generate_event" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0x859204af, "sscanf" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xdd132261, "printk" },
	{ 0xaf25400d, "snprintf" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xd04b857d, "acpi_evaluate_object" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0x8abac70a, "param_set_uint" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DFCF03892F4597D3F92B904");
