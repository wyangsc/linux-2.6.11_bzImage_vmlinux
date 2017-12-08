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
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x379ddd86, "class_unregister" },
	{ 0xc67feda4, "i2c_add_driver" },
	{ 0xfdbcb144, "class_register" },
	{ 0xdbd4b92d, "register_chrdev" },
	{ 0xb3bf19d1, "wait_for_completion" },
	{ 0x6f4e0023, "class_device_unregister" },
	{ 0x3d7082c0, "class_device_create_file" },
	{ 0xa0c5577e, "class_device_register" },
	{ 0xaf25400d, "snprintf" },
	{ 0xe7017ee9, "platform_bus" },
	{ 0x397be676, "complete" },
	{ 0x56d862eb, "no_llseek" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0x806422d3, "i2c_put_adapter" },
	{ 0xedf2e9ed, "i2c_get_adapter" },
	{ 0xed318779, "i2c_control" },
	{ 0xd4ca71cb, "i2c_smbus_xfer" },
	{ 0x136ccdf0, "i2c_transfer" },
	{ 0x9c406589, "i2c_get_functionality" },
	{ 0xa08336b7, "i2c_check_addr" },
	{ 0xdf3b9f70, "i2c_master_send" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x9fb98c7d, "i2c_master_recv" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd132261, "printk" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2ee9fcdc, "_spin_lock" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CD048CBF57BFBE03CFFAF39");
