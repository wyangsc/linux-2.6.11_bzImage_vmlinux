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
	{ 0x1f40685e, "parport_unregister_driver" },
	{ 0xf26edb88, "parport_register_driver" },
	{ 0x905ff570, "i2c_bit_del_bus" },
	{ 0x37a0cba, "kfree" },
	{ 0x79ab200f, "parport_unregister_device" },
	{ 0x4a285f2b, "i2c_bit_add_bus" },
	{ 0xf6dc21d3, "parport_release" },
	{ 0xaaa08d08, "parport_claim_or_block" },
	{ 0xcf40ec2f, "parport_register_device" },
	{ 0xdd132261, "printk" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=parport,i2c-algo-bit";


MODULE_INFO(srcversion, "D77FCCB7AA07319879F0972");
