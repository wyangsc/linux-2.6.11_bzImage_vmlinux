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
	{ 0x85c5d31b, "serio_unregister_driver" },
	{ 0x1f0f3b67, "serio_register_driver" },
	{ 0x235e11b7, "input_register_device" },
	{ 0x2ed93855, "serio_open" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0x511bb155, "serio_close" },
	{ 0xaf150130, "input_unregister_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x656f63b5, "input_event" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xdd132261, "printk" },
	{ 0xa3a5be95, "memmove" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "27423CBD4C378D84DDB8C98");
