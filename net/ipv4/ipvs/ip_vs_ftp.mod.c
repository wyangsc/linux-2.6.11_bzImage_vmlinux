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
	{ 0xadc3e00, "unregister_ip_vs_app" },
	{ 0x19aba745, "register_ip_vs_app_inc" },
	{ 0x157eebc4, "register_ip_vs_app" },
	{ 0xa89c52a4, "ip_vs_conn_in_get" },
	{ 0xea6b0bb5, "ip_vs_conn_put" },
	{ 0x4200e56c, "ip_vs_tcp_conn_listen" },
	{ 0xa3a97b9f, "ip_vs_skb_replace" },
	{ 0x6067a146, "memcpy" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xdd132261, "printk" },
	{ 0x5a0f5af9, "ip_vs_conn_new" },
	{ 0x3dfa31b5, "ip_vs_conn_out_get" },
	{ 0xf8924a2b, "ip_vs_make_skb_writable" },
	{ 0x756e6992, "strnicmp" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ip_vs";


MODULE_INFO(srcversion, "BA31A797390EB0E43B25B25");
