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
	{ 0x88a38128, "i2c_smbus_write_byte" },
	{ 0xbaa37c6c, "i2c_detach_client" },
	{ 0x53474ebf, "i2c_probe" },
	{ 0xdd132261, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x25bc0fa3, "i2c_attach_client" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x16ffee43, "i2c_check_functionality" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x6483655c, "param_get_short" },
	{ 0x40046949, "param_set_short" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "11A0CB3E3B7812C0276576F");
