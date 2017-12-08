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
	{ 0x1f40685e, "parport_unregister_driver" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0xf2ee1654, "class_simple_destroy" },
	{ 0xf26edb88, "parport_register_driver" },
	{ 0xa468b848, "class_simple_create" },
	{ 0xdbd4b92d, "register_chrdev" },
	{ 0xe2f1e52c, "class_simple_device_remove" },
	{ 0xf99c9f6a, "class_simple_device_add" },
	{ 0x56d862eb, "no_llseek" },
	{ 0x79ab200f, "parport_unregister_device" },
	{ 0x188eeee3, "parport_negotiate" },
	{ 0xf6dc21d3, "parport_release" },
	{ 0x7d11c268, "jiffies" },
	{ 0xaaa08d08, "parport_claim_or_block" },
	{ 0x65778afa, "parport_put_port" },
	{ 0xcf40ec2f, "parport_register_device" },
	{ 0xecc39a39, "parport_find_number" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x99e8459b, "parport_write" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x37a0cba, "kfree" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x370d5d64, "parport_read" },
	{ 0x89a608bb, "parport_set_timeout" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xdd132261, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=parport";


MODULE_INFO(srcversion, "20AEB507040B7F526173AC9");
