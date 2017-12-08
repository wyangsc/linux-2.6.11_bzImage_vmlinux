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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x7239748c, "xfrm_unregister_type" },
	{ 0xa37b7441, "ip_send_check" },
	{ 0x93671e8c, "inet_del_protocol" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xdd132261, "printk" },
	{ 0x7c3acc60, "inet_add_protocol" },
	{ 0x2337cf1b, "xfrm_register_type" },
	{ 0x7a5b0809, "xfrm4_rcv" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BB377EA085FF6BADD9187BB");
