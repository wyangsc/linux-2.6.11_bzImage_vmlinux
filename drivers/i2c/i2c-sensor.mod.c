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
	{ 0xdd132261, "printk" },
	{ 0x16ffee43, "i2c_check_functionality" },
	{ 0x6e5c5ec7, "i2c_adapter_id" },
	{ 0xff9f71d7, "cpu_data" },
	{ 0xd4ca71cb, "i2c_smbus_xfer" },
	{ 0xa08336b7, "i2c_check_addr" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D81C7520F5AFA668E29CBDE");
