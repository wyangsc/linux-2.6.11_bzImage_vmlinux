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
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0x4403fcf, "unregister_capi_driver" },
	{ 0x9f823278, "register_capi_driver" },
	{ 0x90b9a166, "pci_register_driver" },
	{ 0x672144bd, "strlcpy" },
	{ 0x349cba85, "strchr" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0xe8f05f4a, "attach_capi_ctr" },
	{ 0xe914e41e, "strcpy" },
	{ 0x5271af5d, "request_irq" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0x39513275, "avmcard_dma_alloc" },
	{ 0x87c8b768, "b1_alloc_card" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x71e8d5ba, "capilib_data_b3_req" },
	{ 0xaa165d27, "capilib_release_appl" },
	{ 0x8ad232f9, "b1_free_card" },
	{ 0x3f619db7, "avmcard_dma_free" },
	{ 0xd49501d4, "__release_region" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x5b4bc37e, "detach_capi_ctr" },
	{ 0x2e284d6b, "capi_ctr_reseted" },
	{ 0x8f699913, "capilib_release" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x69b3ff13, "capi_ctr_ready" },
	{ 0xcb2a49a9, "b1_parse_version" },
	{ 0xabbf94d5, "capi_ctr_suspend_output" },
	{ 0xdd5ae08c, "capi_ctr_resume_output" },
	{ 0x2b8eab1f, "capilib_free_ncci" },
	{ 0x2baa6586, "capilib_new_ncci" },
	{ 0xf2945eb2, "capi_ctr_handle_message" },
	{ 0x62e32d43, "capilib_data_b3_conf" },
	{ 0x3fa03a97, "memset" },
	{ 0x9af738e3, "skb_queue_tail" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
	{ 0x904f7240, "skb_dequeue" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdd132261, "printk" },
	{ 0x6067a146, "memcpy" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x7d11c268, "jiffies" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,b1";

MODULE_ALIAS("pci:v00001011d00001065sv00001244sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00001065sv00001244sd00001100bc*sc*i*");

MODULE_INFO(srcversion, "EB36E11F44BA6F2ED62F55B");
