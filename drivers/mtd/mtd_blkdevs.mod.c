#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

#undef unix
struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = __stringify(KBUILD_MODNAME),
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0x4b498bc8, "struct_module" },
	{ 0x6f6b147b, "blk_init_queue" },
	{ 0xfbfdbec4, "alloc_disk" },
	{ 0x3f600458, "complete_and_exit" },
	{ 0x5ceb0708, "blk_cleanup_queue" },
	{ 0x808df9ec, "mtd_table_mutex" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x153bd8bf, "remove_wait_queue" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x926d701, "default_wake_function" },
	{ 0xb3bf19d1, "wait_for_completion" },
	{ 0xdd132261, "printk" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x1b721ab2, "del_gendisk" },
	{ 0xdccfba14, "register_mtd_user" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xe9a60ad6, "__down_failed_trylock" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xfcae6d4d, "mtd_table" },
	{ 0x6864c152, "unregister_mtd_user" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x6912b5be, "elv_next_request" },
	{ 0x1000e51, "schedule" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x42c2e14e, "put_disk" },
	{ 0xabc32741, "wake_up_process" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xc494d47a, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x29c8f6dc, "add_disk" },
	{ 0xf04cf259, "end_request" },
	{ 0x7ca341af, "kernel_thread" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xaf25400d, "snprintf" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0x67006223, "set_disk_ro" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mtdcore";


MODULE_INFO(srcversion, "35F2EC2686F5F273C98D1F7");
