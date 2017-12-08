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
	{ 0xe2baf7e7, "ipt_unregister_target" },
	{ 0x24d9cce0, "ipt_register_target" },
	{ 0xdd132261, "printk" },
	{ 0x44a69a6d, "skb_checksum_help" },
	{ 0x29dfa6d0, "skb_copy_bits" },
	{ 0xf1e29eae, "csum_partial" },
	{ 0x64b07e9c, "skb_ip_make_writable" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5B736FE438C3997A6954B5B");
