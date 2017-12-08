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
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x589da517, "dma_pool_destroy" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x3fa03a97, "memset" },
	{ 0xdd132261, "printk" },
	{ 0xec2cd46c, "unregister_ioctl32_conversion" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x10c4c1d7, "dma_pool_free" },
	{ 0xd19ea46e, "register_ioctl32_conversion" },
	{ 0x7dceceac, "capable" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x1000e51, "schedule" },
	{ 0xdbd4b92d, "register_chrdev" },
	{ 0xd2f6ba17, "dma_pool_alloc" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x75b74ee6, "dma_pool_create" },
	{ 0x945bc6a7, "copy_from_user" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F93F17CA6C7A907570323DA");
