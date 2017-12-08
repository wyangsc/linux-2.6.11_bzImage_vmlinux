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
	{ 0xf2ee1654, "class_simple_destroy" },
	{ 0xe2f1e52c, "class_simple_device_remove" },
	{ 0xf99c9f6a, "class_simple_device_add" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0xa468b848, "class_simple_create" },
	{ 0xdbd4b92d, "register_chrdev" },
	{ 0x672144bd, "strlcpy" },
	{ 0x349cba85, "strchr" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0xec034e5, "_read_unlock" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0x56d862eb, "no_llseek" },
	{ 0x3a8f9242, "nonseekable_open" },
	{ 0xed061606, "capi20_manufacturer" },
	{ 0x7dceceac, "capable" },
	{ 0x31c24aa4, "capi20_isinstalled" },
	{ 0x7e6f1307, "capi20_get_manufacturer" },
	{ 0xe19a11ac, "capi20_get_profile" },
	{ 0x7a33596c, "capi20_get_serial" },
	{ 0x14f2aa5a, "capi20_get_version" },
	{ 0xaa1ff7d2, "capi20_register" },
	{ 0xbd8e4fb3, "capi20_put_message" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x5facaf26, "skb_queue_head" },
	{ 0x1f1eefa1, "interruptible_sleep_on" },
	{ 0x904f7240, "skb_dequeue" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x9af738e3, "skb_queue_tail" },
	{ 0xdd132261, "printk" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x29956b63, "skb_queue_purge" },
	{ 0x3fd9b163, "capi20_release" },
	{ 0xb6e8051d, "_write_unlock_irqrestore" },
	{ 0x944335f7, "_write_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0x8abac70a, "param_set_uint" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=kernelcapi";


MODULE_INFO(srcversion, "D63E8FD863256B221167812");
