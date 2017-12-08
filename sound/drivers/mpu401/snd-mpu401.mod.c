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
	{ 0xb06b28a1, "acpi_walk_resources" },
	{ 0xd4975872, "acpi_bus_register_driver" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xb2fa52c7, "acpi_register_gsi" },
	{ 0x1992a2ba, "param_set_long" },
	{ 0x9a402abd, "snd_card_free_in_thread" },
	{ 0x600f69fc, "snd_mpu401_uart_new" },
	{ 0x806d5133, "param_array_get" },
	{ 0x8d148f27, "acpi_bus_unregister_driver" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xf116e020, "snd_card_disconnect" },
	{ 0xaa136450, "param_get_charp" },
	{ 0xb11fa1ce, "strlcat" },
	{ 0xdd132261, "printk" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x61651be, "strcat" },
	{ 0x86dd62b9, "snd_card_new" },
	{ 0x53a21daf, "param_get_long" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x6c1e877, "snd_card_free" },
	{ 0x9f2954ad, "snd_card_register" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd,snd-mpu401-uart";


MODULE_INFO(srcversion, "46147C23B1F25467193F5AA");
