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
	{ 0x1b721ab2, "del_gendisk" },
	{ 0x5ceb0708, "blk_cleanup_queue" },
	{ 0x42c2e14e, "put_disk" },
	{ 0x29c8f6dc, "add_disk" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x6f6b147b, "blk_init_queue" },
	{ 0xfbfdbec4, "alloc_disk" },
	{ 0x2d0ea5b9, "set_blocksize" },
	{ 0xe27eee88, "fput" },
	{ 0x83067c36, "fget" },
	{ 0x7dceceac, "capable" },
	{ 0x6912b5be, "elv_next_request" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0xf9b9d40b, "elv_remove_request" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x6067a146, "memcpy" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x7028d8d6, "dequeue_signal" },
	{ 0x68e83444, "kernel_recvmsg" },
	{ 0xba8d9a09, "kernel_sendmsg" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x8d10d433, "end_that_request_last" },
	{ 0xfe5de48a, "end_that_request_first" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xdd132261, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D49DC66FA8259A6AE637F4D");
