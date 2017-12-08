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
	{ 0xbdae6f9d, "gameport_unregister_port" },
	{ 0xd49501d4, "__release_region" },
	{ 0xb40671f9, "gameport_register_port" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xdd132261, "printk" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0x865ebccd, "ioport_resource" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=gameport";


MODULE_INFO(srcversion, "D099BA036D50AB68F185878");
