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
	{ 0xaf150130, "input_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x79ab200f, "parport_unregister_device" },
	{ 0x235e11b7, "input_register_device" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xcf40ec2f, "parport_register_device" },
	{ 0x65778afa, "parport_put_port" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xdd132261, "printk" },
	{ 0xecc39a39, "parport_find_number" },
	{ 0xf6dc21d3, "parport_release" },
	{ 0x4af9e110, "del_timer" },
	{ 0x4828ea8d, "parport_claim" },
	{ 0x79312f78, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x656f63b5, "input_event" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=parport";


MODULE_INFO(srcversion, "0E38F6C78F7E939E0FA28BF");
