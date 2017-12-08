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
	{ 0x37a0cba, "kfree" },
	{ 0xbaa37c6c, "i2c_detach_client" },
	{ 0x53474ebf, "i2c_probe" },
	{ 0x25bc0fa3, "i2c_attach_client" },
	{ 0x672144bd, "strlcpy" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xdd132261, "printk" },
	{ 0x6067a146, "memcpy" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9fb98c7d, "i2c_master_recv" },
	{ 0x7d11c268, "jiffies" },
	{ 0xdf3b9f70, "i2c_master_send" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x6483655c, "param_get_short" },
	{ 0x40046949, "param_set_short" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5FEB598EEB264AA72F6323B");
