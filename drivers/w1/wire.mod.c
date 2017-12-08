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
	{ 0x1704349c, "bus_register" },
	{ 0x8e56d196, "device_remove_file" },
	{ 0x3f600458, "complete_and_exit" },
	{ 0x343ef03f, "driver_register" },
	{ 0x7b99cb7a, "sysfs_remove_bin_file" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xc65ca1ae, "sock_release" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xb3bf19d1, "wait_for_completion" },
	{ 0x307ba9ce, "netlink_kernel_create" },
	{ 0x45f113bd, "device_register" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x8b36d7a4, "driver_unregister" },
	{ 0xccd52b12, "__down_failed_interruptible" },
	{ 0x387f565b, "bus_unregister" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0x6314e42c, "flush_signals" },
	{ 0x838ea3d1, "device_create_file" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x2a8ad3cf, "netlink_broadcast" },
	{ 0x8607fe00, "refrigerator" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x932da67e, "kill_proc" },
	{ 0x5773f8b1, "interruptible_sleep_on_timeout" },
	{ 0xeffd1eb3, "sysfs_create_bin_file" },
	{ 0x7ca341af, "kernel_thread" },
	{ 0x267d6c57, "device_unregister" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x397be676, "complete" },
	{ 0xaf25400d, "snprintf" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0xae52aab7, "_spin_unlock_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "56BC7B053333108222B38CF");
