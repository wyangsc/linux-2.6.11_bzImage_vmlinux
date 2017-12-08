#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

#undef unix
struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = __stringify(KBUILD_MODNAME),
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0x4b498bc8, "struct_module" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x7d11c268, "jiffies" },
	{ 0xac937ff8, "i2c_add_adapter" },
	{ 0xda4008e6, "cond_resched" },
	{ 0xdd132261, "printk" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x25b5d1a9, "i2c_del_adapter" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x9e7d6bd0, "__udelay" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "365F8EF5283D9C5FF3230B9");
