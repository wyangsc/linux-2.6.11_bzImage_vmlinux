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
	{ 0xa1462d03, "transport_class_register" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x982f18c5, "attribute_container_unregister" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x878aafdc, "scsi_is_host_device" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x871702aa, "scsi_internal_device_block" },
	{ 0x3fa03a97, "memset" },
	{ 0xdd132261, "printk" },
	{ 0x85abc85f, "strncmp" },
	{ 0x4649b559, "attribute_container_register" },
	{ 0x4e7031d1, "transport_class_unregister" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x9a95b07f, "schedule_delayed_work" },
	{ 0xf9060fe1, "starget_for_each_device" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x8aa5a5e1, "__scsi_iterate_devices" },
	{ 0x37a0cba, "kfree" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x24fe641c, "scsi_internal_device_unblock" },
	{ 0x28e7b5cf, "scsi_is_target_device" },
	{ 0xaf25400d, "snprintf" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7C988A33C1C1BDB85DF8BAD");
