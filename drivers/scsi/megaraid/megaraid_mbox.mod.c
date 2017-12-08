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
	{ 0xaf25400d, "snprintf" },
	{ 0x2250c66e, "mraid_mm_adapter_app_handle" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0x512c956d, "mraid_mm_unregister_adp" },
	{ 0x6b070502, "mraid_mm_register_adp" },
	{ 0xf9a482f9, "msleep" },
	{ 0x81a8f50b, "dma_unmap_sg" },
	{ 0x3a1573dc, "swiotlb_sync_sg_for_cpu" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0x227e4b21, "swiotlb_sync_single_for_cpu" },
	{ 0xf397b9aa, "__tasklet_schedule" },
	{ 0x4f5a86d8, "swiotlb_sync_sg_for_device" },
	{ 0xcd53e5ab, "swiotlb_sync_single_for_device" },
	{ 0x47636033, "swiotlb" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2646f974, "dma_map_sg" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0xd503383a, "node_data" },
	{ 0xa8ce087b, "memnodemap" },
	{ 0x676c5f99, "memnode_shift" },
	{ 0x6067a146, "memcpy" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x589da517, "dma_pool_destroy" },
	{ 0x10c4c1d7, "dma_pool_free" },
	{ 0xd2f6ba17, "dma_pool_alloc" },
	{ 0x75b74ee6, "dma_pool_create" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0x3fa03a97, "memset" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0x748e788b, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0x5271af5d, "request_irq" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0xab491452, "pci_request_regions" },
	{ 0x9c22a070, "scsi_remove_host" },
	{ 0x199f8774, "scsi_scan_host" },
	{ 0x1fd56ed2, "scsi_add_host" },
	{ 0xe7ccea08, "scsi_host_alloc" },
	{ 0x1f1b676d, "scsi_host_put" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0x90b9a166, "pci_register_driver" },
	{ 0xdd132261, "printk" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=megaraid_mm";

MODULE_ALIAS("pci:v00001028d0000000Esv00001028sd00000123bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00001960sv00001028sd00000520bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00001960sv00001028sd00000518bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000407sv00001028sd00000531bc*sc*i*");
MODULE_ALIAS("pci:v00001028d0000000Fsv00001028sd0000014Abc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000013sv00001028sd0000016Cbc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000013sv00001028sd0000016Dbc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000013sv00001028sd0000016Ebc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000013sv00001028sd0000016Fbc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000013sv00001028sd00000170bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000408sv00001028sd00000002bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000408sv00001028sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v0000101Ed00001960sv00001028sd00000471bc*sc*i*");
MODULE_ALIAS("pci:v0000101Ed00001960sv00001028sd00000493bc*sc*i*");
MODULE_ALIAS("pci:v0000101Ed00001960sv00001028sd00000475bc*sc*i*");
MODULE_ALIAS("pci:v0000101Ed00001960sv0000101Esd00000475bc*sc*i*");
MODULE_ALIAS("pci:v0000101Ed00001960sv0000101Esd00000493bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00001960sv00001000sd0000A520bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00001960sv00001000sd00000520bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00001960sv00001000sd00000518bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000407sv00001000sd00000530bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000407sv00001000sd00000532bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000407sv00001000sd00000531bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000408sv00001000sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000408sv00001000sd00000002bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00001960sv00001000sd00000522bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00001960sv00001000sd00004523bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00001960sv00001000sd00000523bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000409sv00001000sd00003004bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000409sv00001000sd00003008bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000407sv00008086sd00000532bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00001960sv00008086sd00000523bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000408sv00008086sd00000002bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000407sv00008086sd00000530bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000409sv00008086sd00003008bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000408sv00008086sd00003431bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000408sv00008086sd00003499bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00001960sv00008086sd00000520bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000408sv00001734sd00001065bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000408sv00001025sd0000004Dbc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000408sv00001033sd00008287bc*sc*i*");

MODULE_INFO(srcversion, "042A4371A952248BEF860F4");
