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
	{ 0xad9e980e, "saa7146_unregister_extension" },
	{ 0xa3cf620f, "saa7146_register_extension" },
	{ 0x6067a146, "memcpy" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x3fa03a97, "memset" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xf9aaee79, "saa7146_vv_release" },
	{ 0x140d26fa, "saa7146_unregister_device" },
	{ 0x322037c0, "i2c_release_client" },
	{ 0x327e1647, "i2c_use_client" },
	{ 0x3defb493, "saa7146_register_device" },
	{ 0x5748e142, "saa7146_vv_init" },
	{ 0xe943e301, "saa7146_set_hps_source_and_sync" },
	{ 0x136ccdf0, "i2c_transfer" },
	{ 0x25b5d1a9, "i2c_del_adapter" },
	{ 0x37a0cba, "kfree" },
	{ 0xac937ff8, "i2c_add_adapter" },
	{ 0xfce3bec2, "saa7146_i2c_adapter_prepare" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xdd132261, "printk" },
	{ 0x98adfde2, "request_module" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=saa7146,saa7146_vv";

MODULE_ALIAS("pci:v00001131d00007146sv00000000sd00000000bc*sc*i*");

MODULE_INFO(srcversion, "B0F9F7B81B3CF7DCA326013");
