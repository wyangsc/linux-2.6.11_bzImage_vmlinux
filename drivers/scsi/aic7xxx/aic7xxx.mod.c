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
	{ 0x1a1a4f09, "__request_region" },
	{ 0xb57edf8f, "pci_bus_read_config_byte" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0xf9a482f9, "msleep" },
	{ 0x81a8f50b, "dma_unmap_sg" },
	{ 0x349cba85, "strchr" },
	{ 0xe7ccea08, "scsi_host_alloc" },
	{ 0x4af9e110, "del_timer" },
	{ 0x9efed5af, "iomem_resource" },
	{ 0x25ec1b28, "strlen" },
	{ 0xdbda4cc3, "scsi_block_requests" },
	{ 0x2646f974, "dma_map_sg" },
	{ 0xe8a787c0, "scsi_unblock_requests" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x85df9b6c, "strsep" },
	{ 0xedb7f3f8, "pci_bus_write_config_word" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xb3a307c6, "si_meminfo" },
	{ 0x1af68901, "scsi_adjust_queue_depth" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x3fa03a97, "memset" },
	{ 0x865ebccd, "ioport_resource" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0xdf42a872, "scsi_add_timer" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x1fd56ed2, "scsi_add_host" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0x1075bf0, "panic" },
	{ 0xf397b9aa, "__tasklet_schedule" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0x85abc85f, "strncmp" },
	{ 0x199f8774, "scsi_scan_host" },
	{ 0xbfbbd8ac, "pci_bus_write_config_dword" },
	{ 0xccd52b12, "__down_failed_interruptible" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0x79312f78, "mod_timer" },
	{ 0x1f1b676d, "scsi_host_put" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0x61651be, "strcat" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0x6cfe6c1c, "pci_bus_read_config_word" },
	{ 0xab2b15ff, "pci_bus_read_config_dword" },
	{ 0x5271af5d, "request_irq" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xd49501d4, "__release_region" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x9382ccd4, "pci_set_power_state" },
	{ 0x710782cf, "pci_bus_write_config_byte" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x76dbab37, "scsi_report_bus_reset" },
	{ 0x7ca341af, "kernel_thread" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x9c22a070, "scsi_remove_host" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x954cbb26, "vsprintf" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0x646ff2d3, "scsi_report_device_reset" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x90b9a166, "pci_register_driver" },
	{ 0x135d86, "scsi_delete_timer" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00009004d00005078sv00009004sd00007850bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00003860sv00009004sd00003869bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00006075sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00006178sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00002178sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00006038sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007178sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007278sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007378sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007478sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007578sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007678sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008178sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008278sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008478sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008578sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008378sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008678sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008878sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008778sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00000078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000011sv00009005sd00000181bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv00009005sd0000A100bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv00009005sd00002180bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv00009005sd0000A180bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv00009005sd0000E100bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000011sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000012sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000013sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000014sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000015sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000016sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000017sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000018sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000019sv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Asv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Bsv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Csv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Dsv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Esv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Fsv00009005sd0000000Fbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000013sv00009005sd00000003bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv00009005sd0000E2A0bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv00000E11sd0000E2A0bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv00009005sd000062A0bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv00009005sd00006220bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv00009005sd0000E220bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000081sv00009005sd000062A1bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000083sv00009005sd0000FFFFbc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007895sv00009004sd00007891bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007895sv00009004sd00007892bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007895sv00009004sd00007894bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007890sv00009004sd00007893bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000050sv00009005sd0000FFFFbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000050sv00009005sd0000F500bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000051sv00009005sd0000FFFFbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000051sv00009005sd0000B500bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000053sv00009005sd0000FFFFbc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C0sv00009005sd0000F620bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C0sv00000E11sd0000F620bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C3sv00009005sd0000FFFFbc01sc00i*");
MODULE_ALIAS("pci:v00009004d00005078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00005578sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00003860sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00006078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00008078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000010sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000011sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000012sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000013sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000014sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000015sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000016sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000017sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000018sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000019sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000001Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000080sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000081sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000082sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000083sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000084sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000085sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000086sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000087sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000088sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000089sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000008Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007895sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000050sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000051sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000052sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000053sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000054sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000055sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000056sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000057sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000058sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00000059sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000005Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C0sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C1sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C2sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C3sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C4sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C5sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C6sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C7sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C8sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000C9sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CAsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CBsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CCsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CDsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CEsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d000000CFsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00001078sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009004d00007815sv*sd*bc01sc00i*");

MODULE_INFO(srcversion, "19E388BB348AA3B72CC9717");
