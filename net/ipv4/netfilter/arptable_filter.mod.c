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
	{ 0xc527732d, "arpt_unregister_table" },
	{ 0xabdbbad8, "nf_unregister_hook" },
	{ 0x86aea614, "nf_register_hook" },
	{ 0xff8d6c70, "arpt_register_table" },
	{ 0xb26677f0, "arpt_do_table" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=arp_tables";


MODULE_INFO(srcversion, "F748EEDB70E10ABE92FA93C");
