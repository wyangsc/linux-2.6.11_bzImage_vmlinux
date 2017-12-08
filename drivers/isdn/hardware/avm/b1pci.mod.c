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
	{ 0x3f619db7, "avmcard_dma_free" },
	{ 0xedc03953, "iounmap" },
	{ 0x6614aebd, "b1dmactl_read_proc" },
	{ 0x5819d77, "b1dma_reset_ctr" },
	{ 0x4526b7d5, "b1dma_load_firmware" },
	{ 0xf7de4f90, "b1dma_send_message" },
	{ 0x3f108b22, "b1dma_release_appl" },
	{ 0x638152a1, "b1dma_register_appl" },
	{ 0x405cf7b2, "b1dma_interrupt" },
	{ 0xe64bc2f9, "b1pciv4_detect" },
	{ 0x68e0dcc4, "b1dma_reset" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x39513275, "avmcard_dma_alloc" },
	{ 0x5b4bc37e, "detach_capi_ctr" },
	{ 0x8ad232f9, "b1_free_card" },
	{ 0xd49501d4, "__release_region" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xe8f05f4a, "attach_capi_ctr" },
	{ 0xe914e41e, "strcpy" },
	{ 0x55d13c7a, "b1ctl_read_proc" },
	{ 0x65ca3e14, "b1_reset_ctr" },
	{ 0xaba4a77b, "b1_load_firmware" },
	{ 0xf9bab4a1, "b1_send_message" },
	{ 0x30c4f8f5, "b1_release_appl" },
	{ 0xeafeacf6, "b1_register_appl" },
	{ 0x5271af5d, "request_irq" },
	{ 0x42fe58a1, "b1_interrupt" },
	{ 0x4a915ab6, "b1_getrevision" },
	{ 0xdfd28376, "b1_detect" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0xdd132261, "printk" },
	{ 0x87c8b768, "b1_alloc_card" },
	{ 0x1d26aa98, "sprintf" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,b1,b1dma";

MODULE_ALIAS("pci:v00001244d00000700sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4A9F6B7A0EB00EACD5ACEA6");
