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
	{ 0x9c22a070, "scsi_remove_host" },
	{ 0x199f8774, "scsi_scan_host" },
	{ 0x1f1b676d, "scsi_host_put" },
	{ 0x1fd56ed2, "scsi_add_host" },
	{ 0xe7ccea08, "scsi_host_alloc" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x267d6c57, "device_unregister" },
	{ 0x387f565b, "bus_unregister" },
	{ 0x8b36d7a4, "driver_unregister" },
	{ 0x343ef03f, "driver_register" },
	{ 0x1704349c, "bus_register" },
	{ 0x45f113bd, "device_register" },
	{ 0x3fa03a97, "memset" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x6098dac0, "driver_remove_file" },
	{ 0xec31d1b8, "driver_create_file" },
	{ 0x756e6992, "strnicmp" },
	{ 0x859204af, "sscanf" },
	{ 0x7dceceac, "capable" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afe9a77, "scsi_partsize" },
	{ 0xc3e0a985, "scsi_bios_ptable" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x1af68901, "scsi_adjust_queue_depth" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xb6e8051d, "_write_unlock_irqrestore" },
	{ 0x944335f7, "_write_lock_irqsave" },
	{ 0xcec83301, "_read_unlock_irqrestore" },
	{ 0xc15cd12d, "_read_lock_irqsave" },
	{ 0x7bb4de17, "scnprintf" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0x6067a146, "memcpy" },
	{ 0xdd132261, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5317C5DE9FECBFE0046ABF9");
