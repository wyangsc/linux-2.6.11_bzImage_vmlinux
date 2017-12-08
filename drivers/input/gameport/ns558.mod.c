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
	{ 0x40536eab, "pnp_unregister_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdae6f9d, "gameport_unregister_port" },
	{ 0x3ddca155, "pnp_register_driver" },
	{ 0xb40671f9, "gameport_register_port" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xdd132261, "printk" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd49501d4, "__release_region" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0x865ebccd, "ioport_resource" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=gameport";

MODULE_ALIAS("pnp:d@P@0001*");
MODULE_ALIAS("pnp:d@P@0020*");
MODULE_ALIAS("pnp:d@P@1001*");
MODULE_ALIAS("pnp:d@P@2001*");
MODULE_ALIAS("pnp:dASB16fd*");
MODULE_ALIAS("pnp:dAZT3001*");
MODULE_ALIAS("pnp:dCDC0001*");
MODULE_ALIAS("pnp:dCSC0001*");
MODULE_ALIAS("pnp:dCSC000f*");
MODULE_ALIAS("pnp:dCSC0101*");
MODULE_ALIAS("pnp:dCTL7001*");
MODULE_ALIAS("pnp:dCTL7002*");
MODULE_ALIAS("pnp:dCTL7005*");
MODULE_ALIAS("pnp:dENS2020*");
MODULE_ALIAS("pnp:dESS0001*");
MODULE_ALIAS("pnp:dESS0005*");
MODULE_ALIAS("pnp:dESS6880*");
MODULE_ALIAS("pnp:dIBM0012*");
MODULE_ALIAS("pnp:dOPT0001*");
MODULE_ALIAS("pnp:dYMH0006*");
MODULE_ALIAS("pnp:dYMH0022*");
MODULE_ALIAS("pnp:dPNPb02f*");

MODULE_INFO(srcversion, "FF523EDB6E9EAC5EDE3DE12");
