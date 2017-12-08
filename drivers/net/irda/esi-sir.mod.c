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
	{ 0x448b8aaa, "irda_qos_bits_to_value" },
	{ 0x4d92284e, "sirdev_set_dtr_rts" },
	{ 0xc6bd4e12, "irda_unregister_dongle" },
	{ 0x5579b93d, "irda_register_dongle" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=irda,sir-dev";


MODULE_INFO(srcversion, "38605D5F948C1F2A9E7FF14");
