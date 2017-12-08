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
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x8f699913, "capilib_release" },
	{ 0x349cba85, "strchr" },
	{ 0x6662ebea, "b1_load_t4file" },
	{ 0x2baa6586, "capilib_new_ncci" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xaa165d27, "capilib_release_appl" },
	{ 0x2b8eab1f, "capilib_free_ncci" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0xf2945eb2, "capi_ctr_handle_message" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xcb2a49a9, "b1_parse_version" },
	{ 0x7d11c268, "jiffies" },
	{ 0x3fa03a97, "memset" },
	{ 0xdd5ae08c, "capi_ctr_resume_output" },
	{ 0xdd132261, "printk" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x69b3ff13, "capi_ctr_ready" },
	{ 0x672144bd, "strlcpy" },
	{ 0x71e8d5ba, "capilib_data_b3_req" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xabbf94d5, "capi_ctr_suspend_output" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2e284d6b, "capi_ctr_reseted" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x9af738e3, "skb_queue_tail" },
	{ 0x8abc2dc1, "b1_load_config" },
	{ 0x6067a146, "memcpy" },
	{ 0x904f7240, "skb_dequeue" },
	{ 0x62e32d43, "capilib_data_b3_conf" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,b1";


MODULE_INFO(srcversion, "94497F767498566C989CEE9");
