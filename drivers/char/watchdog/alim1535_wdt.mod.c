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
	{ 0x3980aac1, "unregister_reboot_notifier" },
	{ 0x55b3bf05, "misc_deregister" },
	{ 0x1cc6719a, "register_reboot_notifier" },
	{ 0xe2193e8c, "misc_register" },
	{ 0x56d862eb, "no_llseek" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x1efb28e1, "pci_find_device" },
	{ 0xdd132261, "printk" },
	{ 0x3a8f9242, "nonseekable_open" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xbfbbd8ac, "pci_bus_write_config_dword" },
	{ 0xab2b15ff, "pci_bus_read_config_dword" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000010B9d000005FFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4267DE7F826CBA7A3659149");