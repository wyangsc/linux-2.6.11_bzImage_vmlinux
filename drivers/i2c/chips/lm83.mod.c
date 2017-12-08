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
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7d11c268, "jiffies" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xbaa37c6c, "i2c_detach_client" },
	{ 0x37a0cba, "kfree" },
	{ 0x838ea3d1, "device_create_file" },
	{ 0x25bc0fa3, "i2c_attach_client" },
	{ 0x672144bd, "strlcpy" },
	{ 0xdd132261, "printk" },
	{ 0x64c95f87, "i2c_smbus_read_byte_data" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x16ffee43, "i2c_check_functionality" },
	{ 0x9f424bf8, "i2c_detect" },
	{ 0xf13f470b, "i2c_smbus_write_byte_data" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x6483655c, "param_get_short" },
	{ 0x40046949, "param_set_short" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2c-sensor";


MODULE_INFO(srcversion, "3D889617C8FB0C1622257DB");
