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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xeac1c4af, "unregister_blkdev" },
	{ 0x413133c0, "mmc_unregister_driver" },
	{ 0xc19f36cd, "mmc_register_driver" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x60abba9a, "mmc_queue_resume" },
	{ 0xee837630, "mmc_queue_suspend" },
	{ 0x1b721ab2, "del_gendisk" },
	{ 0x29c8f6dc, "add_disk" },
	{ 0x2626ca37, "blk_queue_hardsect_size" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x87e0653a, "mmc_init_queue" },
	{ 0xfbfdbec4, "alloc_disk" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x59c84fd6, "mmc_release_host" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0x8d10d433, "end_that_request_last" },
	{ 0xf9b9d40b, "elv_remove_request" },
	{ 0xcbc29c03, "add_disk_randomness" },
	{ 0x13e54176, "end_that_request_chunk" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x36f51355, "mmc_wait_for_cmd" },
	{ 0x9506cb54, "mmc_wait_for_req" },
	{ 0xf629fa6a, "blk_rq_map_sg" },
	{ 0xd0b1ee75, "__mmc_claim_host" },
	{ 0xdd132261, "printk" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x87a20dfd, "check_disk_change" },
	{ 0x37a0cba, "kfree" },
	{ 0x7780623d, "mmc_cleanup_queue" },
	{ 0x42c2e14e, "put_disk" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=mmc_core";


MODULE_INFO(srcversion, "37F59F6AAEAA5C615A80F13");
