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
	{ 0xd5255c28, "tty_register_ldisc" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb6c9d7b, "sirdev_put_instance" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xcd0b2620, "sirdev_get_instance" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0xb31f36e1, "sirdev_set_dongle" },
	{ 0x90bd2c3a, "n_tty_ioctl" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xf1d4516c, "sirdev_write_complete" },
	{ 0x2be02d1e, "sirdev_receive" },
	{ 0xdd132261, "printk" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=sir-dev";


MODULE_INFO(srcversion, "F0FCEA55B7899ADC47DC230");
