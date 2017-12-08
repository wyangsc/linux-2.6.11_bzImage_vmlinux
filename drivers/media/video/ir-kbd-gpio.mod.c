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
	{ 0x6137dade, "bttv_sub_unregister" },
	{ 0x9c3d010c, "bttv_sub_register" },
	{ 0xaf150130, "input_unregister_device" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x4af9e110, "del_timer" },
	{ 0x235e11b7, "input_register_device" },
	{ 0x2da149f7, "ir_input_init" },
	{ 0xaf25400d, "snprintf" },
	{ 0x4402c67a, "bttv_gpio_inout" },
	{ 0x37a0cba, "kfree" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x79312f78, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0x30e0aa15, "ir_input_nokey" },
	{ 0x10c4d69d, "ir_input_keydown" },
	{ 0xdd132261, "printk" },
	{ 0x1cb148f5, "ir_extract_bits" },
	{ 0x6d02cf52, "bttv_gpio_read" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=bttv,ir-common";


MODULE_INFO(srcversion, "2CC89CFCA630515CD86070E");
