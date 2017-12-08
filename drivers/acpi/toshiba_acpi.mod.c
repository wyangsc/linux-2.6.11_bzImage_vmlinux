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
	{ 0x63763d40, "acpi_root_dir" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0x859204af, "sscanf" },
	{ 0xdd132261, "printk" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xd04b857d, "acpi_evaluate_object" },
	{ 0x2bfeb410, "acpi_get_handle" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "25214545FAE4FAA6F9D9024");
