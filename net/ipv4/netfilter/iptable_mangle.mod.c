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
	{ 0x4bbc4e0f, "ipt_unregister_table" },
	{ 0xabdbbad8, "nf_unregister_hook" },
	{ 0x86aea614, "nf_register_hook" },
	{ 0xd4368da7, "ipt_register_table" },
	{ 0xf6e5af37, "ip_route_me_harder" },
	{ 0xdd132261, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8676caba, "ipt_do_table" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "58C879559EB89EB984712C5");
