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
	{ 0xe8f05f4a, "attach_capi_ctr" },
	{ 0x42fe58a1, "b1_interrupt" },
	{ 0xf9bab4a1, "b1_send_message" },
	{ 0x349cba85, "strchr" },
	{ 0x55d13c7a, "b1ctl_read_proc" },
	{ 0x9f823278, "register_capi_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x30c4f8f5, "b1_release_appl" },
	{ 0x65ca3e14, "b1_reset_ctr" },
	{ 0xdd132261, "printk" },
	{ 0x4403fcf, "unregister_capi_driver" },
	{ 0x672144bd, "strlcpy" },
	{ 0x8ad232f9, "b1_free_card" },
	{ 0xaba4a77b, "b1_load_firmware" },
	{ 0x5271af5d, "request_irq" },
	{ 0xeafeacf6, "b1_register_appl" },
	{ 0xdfd28376, "b1_detect" },
	{ 0x4a915ab6, "b1_getrevision" },
	{ 0x5b4bc37e, "detach_capi_ctr" },
	{ 0x87c8b768, "b1_alloc_card" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,b1";


MODULE_INFO(srcversion, "0763ED384AAC246EE792538");
