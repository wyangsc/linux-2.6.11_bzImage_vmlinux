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
	{ 0xb6c3e8fe, "alloc_pages_current" },
	{ 0x1a1a4f09, "__request_region" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0xf9a482f9, "msleep" },
	{ 0x900b315c, "get_zeroed_page" },
	{ 0x81a8f50b, "dma_unmap_sg" },
	{ 0xb7a7f25d, "pci_release_region" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x9efed5af, "iomem_resource" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0x7dcae935, "ib_register_mad_agent" },
	{ 0x2646f974, "dma_map_sg" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0x7b036db8, "pci_disable_msix" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xedb7f3f8, "pci_bus_write_config_word" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x589da517, "dma_pool_destroy" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x85bd6316, "ib_get_cached_gid" },
	{ 0x59a2ac08, "ib_destroy_ah" },
	{ 0xefb86f19, "ib_alloc_device" },
	{ 0x55c4d62c, "ib_dealloc_device" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0xb3bf19d1, "wait_for_completion" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x3fa03a97, "memset" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0x58ede463, "pci_enable_msix" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0x5252f304, "__memcpy_toio" },
	{ 0xdd132261, "printk" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x699ce795, "find_next_zero_bit" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0x672144bd, "strlcpy" },
	{ 0x3d7082c0, "class_device_create_file" },
	{ 0xbfbbd8ac, "pci_bus_write_config_dword" },
	{ 0xccd52b12, "__down_failed_interruptible" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x10c4c1d7, "dma_pool_free" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x76041ee5, "ib_get_cached_pkey" },
	{ 0xaaeb10d3, "swiotlb_dma_mapping_error" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x94950963, "pci_enable_msi" },
	{ 0x8915c5dc, "ib_ud_header_init" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0xc91c69c8, "ib_dispatch_event" },
	{ 0xb3d2bf12, "find_first_zero_bit" },
	{ 0xcc7ef4e5, "ib_post_send_mad" },
	{ 0xaa7b63ae, "pci_find_capability" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0xdb127f7b, "ib_unregister_mad_agent" },
	{ 0xe3fd10ea, "ib_create_ah" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x47bfaf50, "__free_pages" },
	{ 0x6cfe6c1c, "pci_bus_read_config_word" },
	{ 0xab2b15ff, "pci_bus_read_config_dword" },
	{ 0x47636033, "swiotlb" },
	{ 0x62cf5b98, "ib_register_device" },
	{ 0x5271af5d, "request_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x72f8b29d, "ib_unregister_device" },
	{ 0xd2f6ba17, "dma_pool_alloc" },
	{ 0xd49501d4, "__release_region" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0xf666cbb3, "__memcpy_fromio" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0xa121a96f, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x2274556d, "find_first_bit" },
	{ 0xbb46e5ea, "pci_get_device" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0x3cd0bb5, "ib_ud_header_pack" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xf1b44169, "pci_dev_put" },
	{ 0x1675606f, "bad_dma_address" },
	{ 0x397be676, "complete" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x32248e6d, "pci_set_consistent_dma_mask" },
	{ 0x75b74ee6, "dma_pool_create" },
	{ 0xcc7f543, "pci_request_region" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x90b9a166, "pci_register_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ib_mad,ib_core";

MODULE_ALIAS("pci:v000015B3d00005A44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00005A44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006278sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00006278sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006282sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00006282sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D55438B345F3070A2FBFE66");
