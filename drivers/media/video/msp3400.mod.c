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
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x53474ebf, "i2c_probe" },
	{ 0xbaa37c6c, "i2c_detach_client" },
	{ 0x9fddc895, "kthread_stop" },
	{ 0x25bc0fa3, "i2c_attach_client" },
	{ 0xabc32741, "wake_up_process" },
	{ 0xb3eaa9e7, "kthread_create" },
	{ 0xaf25400d, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x8607fe00, "refrigerator" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x926d701, "default_wake_function" },
	{ 0xdf3b9f70, "i2c_master_send" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdd132261, "printk" },
	{ 0x136ccdf0, "i2c_transfer" },
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


MODULE_INFO(srcversion, "5227D70747FC4E2732159E8");
