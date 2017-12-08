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
	{ 0x5789f256, "proc_mkdir" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x63763d40, "acpi_root_dir" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe914e41e, "strcpy" },
	{ 0x2bfeb410, "acpi_get_handle" },
	{ 0x8d148f27, "acpi_bus_unregister_driver" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0x2bb55d6e, "acpi_remove_notify_handler" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0xd4975872, "acpi_bus_register_driver" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xd9091363, "acpi_install_notify_handler" },
	{ 0xabf18f58, "acpi_bus_get_device" },
	{ 0x61651be, "strcat" },
	{ 0x37a0cba, "kfree" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xe0977a3f, "acpi_bus_generate_event" },
	{ 0x859204af, "sscanf" },
	{ 0x85abc85f, "strncmp" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x349cba85, "strchr" },
	{ 0xd04b857d, "acpi_evaluate_object" },
	{ 0xdd132261, "printk" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7B822B9028064395EB8DB4E");
