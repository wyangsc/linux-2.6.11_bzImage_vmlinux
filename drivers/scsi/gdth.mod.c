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
	{ 0x6b2dc060, "dump_stack" },
	{ 0x9c22a070, "scsi_remove_host" },
	{ 0x199f8774, "scsi_scan_host" },
	{ 0x1fd56ed2, "scsi_add_host" },
	{ 0x6ab480f7, "scsi_put_command" },
	{ 0xcc7d13c1, "scsi_get_command" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x3980aac1, "unregister_reboot_notifier" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x72b243d4, "free_dma" },
	{ 0x1cc6719a, "register_reboot_notifier" },
	{ 0xdbd4b92d, "register_chrdev" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0x3fc21455, "scsi_unregister" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x7054a3e4, "request_dma" },
	{ 0x5271af5d, "request_irq" },
	{ 0xe51ce92f, "scsi_register" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x349cba85, "strchr" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0x81a8f50b, "dma_unmap_sg" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0xd503383a, "node_data" },
	{ 0xa8ce087b, "memnodemap" },
	{ 0x676c5f99, "memnode_shift" },
	{ 0x2646f974, "dma_map_sg" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0x672144bd, "strlcpy" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0x5252f304, "__memcpy_toio" },
	{ 0xedb7f3f8, "pci_bus_write_config_word" },
	{ 0x6cfe6c1c, "pci_bus_read_config_word" },
	{ 0xbfbbd8ac, "pci_bus_write_config_dword" },
	{ 0x4327f0d5, "memset_io" },
	{ 0x1efb28e1, "pci_find_device" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4af9e110, "del_timer" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x397be676, "complete" },
	{ 0xb3bf19d1, "wait_for_completion" },
	{ 0xf99aa8be, "scsi_do_req" },
	{ 0x37a0cba, "kfree" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x61651be, "strcat" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0xe914e41e, "strcpy" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x3fa03a97, "memset" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x6067a146, "memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x6c9247ee, "scsi_free_host_dev" },
	{ 0xba5eb7e0, "scsi_release_request" },
	{ 0x85abc85f, "strncmp" },
	{ 0x481f468b, "scsi_allocate_request" },
	{ 0x4f9f4739, "scsi_get_host_dev" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001119d*sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000601sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2B21E419ECE87CD0C8D1078");
