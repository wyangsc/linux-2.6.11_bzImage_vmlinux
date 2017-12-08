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
	{ 0x4c0a23f3, "i2c_del_driver" },
	{ 0xc67feda4, "i2c_add_driver" },
	{ 0xbaa37c6c, "i2c_detach_client" },
	{ 0x53474ebf, "i2c_probe" },
	{ 0x25bc0fa3, "i2c_attach_client" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf25400d, "snprintf" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xdd132261, "printk" },
	{ 0xa72f116a, "i2c_smbus_read_byte" },
	{ 0x1620a668, "sleep_on_timeout" },
	{ 0x136ccdf0, "i2c_transfer" },
	{ 0x16ffee43, "i2c_check_functionality" },
	{ 0xf13f470b, "i2c_smbus_write_byte_data" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0EE6BD0A7917EDAB067F1D2");
