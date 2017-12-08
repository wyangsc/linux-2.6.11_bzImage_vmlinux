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
	{ 0xe2f1e52c, "class_simple_device_remove" },
	{ 0x79ab200f, "parport_unregister_device" },
	{ 0x1f40685e, "parport_unregister_driver" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x85abc85f, "strncmp" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0xf2ee1654, "class_simple_destroy" },
	{ 0xf26edb88, "parport_register_driver" },
	{ 0xa468b848, "class_simple_create" },
	{ 0xdbd4b92d, "register_chrdev" },
	{ 0x29d76d3, "unregister_console" },
	{ 0x23846cb6, "register_console" },
	{ 0xf99c9f6a, "class_simple_device_add" },
	{ 0xcf40ec2f, "parport_register_device" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0x806d5133, "param_array_get" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0xc740c64a, "memchr" },
	{ 0x4828ea8d, "parport_claim" },
	{ 0x37a0cba, "kfree" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x370d5d64, "parport_read" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x1000e51, "schedule" },
	{ 0x99e8459b, "parport_write" },
	{ 0x89a608bb, "parport_set_timeout" },
	{ 0xccd52b12, "__down_failed_interruptible" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xdd132261, "printk" },
	{ 0x7d11c268, "jiffies" },
	{ 0x5773f8b1, "interruptible_sleep_on_timeout" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x188eeee3, "parport_negotiate" },
	{ 0xf6dc21d3, "parport_release" },
	{ 0xaaa08d08, "parport_claim_or_block" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=parport";


MODULE_INFO(srcversion, "74D2846FDCEDC0693214BDF");
