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
	{ 0x3f600458, "complete_and_exit" },
	{ 0x81a8f50b, "dma_unmap_sg" },
	{ 0xe7ccea08, "scsi_host_alloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xc3e0a985, "scsi_bios_ptable" },
	{ 0x2646f974, "dma_map_sg" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1af68901, "scsi_adjust_queue_depth" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0xf116d4b5, "copy_in_user" },
	{ 0x926d701, "default_wake_function" },
	{ 0xb3bf19d1, "wait_for_completion" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0x3fa03a97, "memset" },
	{ 0x208ce54a, "sys_ioctl" },
	{ 0xb56717cf, "xtime" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x1fd56ed2, "scsi_add_host" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0xec2cd46c, "unregister_ioctl32_conversion" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0x672144bd, "strlcpy" },
	{ 0x199f8774, "scsi_scan_host" },
	{ 0xccd52b12, "__down_failed_interruptible" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xd19ea46e, "register_ioctl32_conversion" },
	{ 0x9eac042a, "__ioremap" },
	{ 0x1f1b676d, "scsi_host_put" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0x7dceceac, "capable" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x5271af5d, "request_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xdbd4b92d, "register_chrdev" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x932da67e, "kill_proc" },
	{ 0x6067a146, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x7ca341af, "kernel_thread" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x9c22a070, "scsi_remove_host" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x32248e6d, "pci_set_consistent_dma_mask" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x7aec9089, "clear_user" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x90b9a166, "pci_register_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001028d00000001sv00001028sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000002sv00001028sd00000002bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000003sv00001028sd00000003bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000004sv00001028sd000000D0bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000002sv00001028sd000000D1bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000002sv00001028sd000000D9bc*sc*i*");
MODULE_ALIAS("pci:v00001028d0000000Asv00001028sd00000106bc*sc*i*");
MODULE_ALIAS("pci:v00001028d0000000Asv00001028sd0000011Bbc*sc*i*");
MODULE_ALIAS("pci:v00001028d0000000Asv00001028sd00000121bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000283sv00009005sd00000283bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000284sv00009005sd00000284bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000286bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000285bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000287bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv000017AAsd00000286bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv000017AAsd00000287bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000288bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000289bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000028Abc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000028Bbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000028Cbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000028Dbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000029Bbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000029Cbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000029Dbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000028Ebc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000028Fbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000290bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001028sd00000291bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000292bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000293bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000294bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv0000103Csd00003227bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000296bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000297bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001014sd000002F2bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000298bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000299bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000029Abc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001028sd00000287bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000046sv00009005sd00000365bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000046sv00009005sd00000364bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000046sv00009005sd00001364bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000046sv0000103Csd000010C2bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001028sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv000017AAsd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FC087DAF79561C9BB31B905");
