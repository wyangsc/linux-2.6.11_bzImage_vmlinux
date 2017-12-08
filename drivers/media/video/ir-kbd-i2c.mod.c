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
	{ 0xaf150130, "input_unregister_device" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x4af9e110, "del_timer" },
	{ 0x235e11b7, "input_register_device" },
	{ 0x2da149f7, "ir_input_init" },
	{ 0xaf25400d, "snprintf" },
	{ 0x25bc0fa3, "i2c_attach_client" },
	{ 0x37a0cba, "kfree" },
	{ 0x4740e7a3, "ir_codes_empty" },
	{ 0xd9c7f010, "ir_codes_rc5_tv" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x79312f78, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0x10c4d69d, "ir_input_keydown" },
	{ 0x30e0aa15, "ir_input_nokey" },
	{ 0xdd132261, "printk" },
	{ 0x9fb98c7d, "i2c_master_recv" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ir-common";


MODULE_INFO(srcversion, "B3388E3621865222EB8D097");
