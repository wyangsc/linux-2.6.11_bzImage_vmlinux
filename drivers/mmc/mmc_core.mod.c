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
	{ 0x6f6b147b, "blk_init_queue" },
	{ 0x1704349c, "bus_register" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x3f600458, "complete_and_exit" },
	{ 0x343ef03f, "driver_register" },
	{ 0x5ceb0708, "blk_cleanup_queue" },
	{ 0x51bd1731, "blk_queue_prep_rq" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0xf8e48c6b, "blk_dump_rq_flags" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0x1719edb9, "blk_queue_max_sectors" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xf4cad9f9, "blk_start_queue" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x926d701, "default_wake_function" },
	{ 0xb3bf19d1, "wait_for_completion" },
	{ 0xcb2e1047, "blk_queue_max_phys_segments" },
	{ 0xc42bd07, "device_del" },
	{ 0xdd132261, "printk" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x8b36d7a4, "driver_unregister" },
	{ 0x56738020, "blk_queue_max_hw_segments" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xde7c9e6c, "device_add" },
	{ 0x387f565b, "bus_unregister" },
	{ 0x838ea3d1, "device_create_file" },
	{ 0x6040646c, "blk_queue_bounce_limit" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0xdb98b39d, "put_device" },
	{ 0x6912b5be, "elv_next_request" },
	{ 0x1000e51, "schedule" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x7bd90016, "blk_stop_queue" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xa7372b85, "device_initialize" },
	{ 0x7ca341af, "kernel_thread" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x397be676, "complete" },
	{ 0xaf25400d, "snprintf" },
	{ 0x7173c24b, "blk_queue_max_segment_size" },
	{ 0x1163f0a7, "blk_max_low_pfn" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0xae52aab7, "_spin_unlock_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B60C17BA68A4A298E2AB163");
