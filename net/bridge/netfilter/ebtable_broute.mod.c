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
	{ 0x2e3a03e5, "ebt_unregister_table" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xfded51a8, "br_should_route_hook" },
	{ 0xba7ba2d7, "ebt_register_table" },
	{ 0xc723de58, "ebt_do_table" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ebtables,bridge";


MODULE_INFO(srcversion, "3F09B4A8BCBD13AF050AC69");
