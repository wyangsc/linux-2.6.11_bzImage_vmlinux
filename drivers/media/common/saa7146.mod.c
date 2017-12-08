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
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb7a7f25d, "pci_release_region" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0x2646f974, "dma_map_sg" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0x3fa03a97, "memset" },
	{ 0xdd132261, "printk" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0xccd52b12, "__down_failed_interruptible" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0xab2b15ff, "pci_bus_read_config_dword" },
	{ 0x5271af5d, "request_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0xedc03953, "iounmap" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xec5b8587, "vmalloc_to_page" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0xcc7f543, "pci_request_region" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x90b9a166, "pci_register_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E4F7A78E7F0B5BA5D3C8CD2");
