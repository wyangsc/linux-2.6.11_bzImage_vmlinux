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
	{ 0x44c527e7, "usb_deregister" },
	{ 0xa30aea4a, "usb_register" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x37a0cba, "kfree" },
	{ 0xe24e33a0, "usb_buffer_free" },
	{ 0x15529b4d, "usb_free_urb" },
	{ 0x3980aac1, "unregister_reboot_notifier" },
	{ 0x55b3bf05, "misc_deregister" },
	{ 0xe2193e8c, "misc_register" },
	{ 0x1cc6719a, "register_reboot_notifier" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x67d6f733, "usb_alloc_urb" },
	{ 0xd3987aac, "usb_buffer_alloc" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x56d862eb, "no_llseek" },
	{ 0x3a8f9242, "nonseekable_open" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xd16ac615, "__get_user_1" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x328c7ee9, "usb_control_msg" },
	{ 0x10b3c308, "usb_submit_urb" },
	{ 0xdd132261, "printk" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0C98p1140dl*dh*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "372867DEF18692311618490");
