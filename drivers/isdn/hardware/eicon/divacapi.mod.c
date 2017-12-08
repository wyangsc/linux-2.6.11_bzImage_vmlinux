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
	{ 0xf9a482f9, "msleep" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0xe8f05f4a, "attach_capi_ctr" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x25ec1b28, "strlen" },
	{ 0xf2945eb2, "capi_ctr_handle_message" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x3fa03a97, "memset" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x69b3ff13, "capi_ctr_ready" },
	{ 0x672144bd, "strlcpy" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x25c61b3f, "_spin_unlock_bh" },
	{ 0x6067a146, "memcpy" },
	{ 0x5b4bc37e, "detach_capi_ctr" },
	{ 0xa3a5be95, "memmove" },
	{ 0x2974ead1, "DIVA_DIDD_Read" },
	{ 0x66bcc308, "_spin_lock_bh" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,divadidd";


MODULE_INFO(srcversion, "6EC6E09FA8240FE8B1C9B74");
