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
	{ 0x349cba85, "strchr" },
	{ 0x4af9e110, "del_timer" },
	{ 0x25ec1b28, "strlen" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x56d862eb, "no_llseek" },
	{ 0x1f1eefa1, "interruptible_sleep_on" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x3a8f9242, "nonseekable_open" },
	{ 0x7d11c268, "jiffies" },
	{ 0xb7757abb, "isdn_register_divert" },
	{ 0x5edb55b4, "proc_net" },
	{ 0xdd132261, "printk" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=isdn";


MODULE_INFO(srcversion, "4395D1096D8C2DC214C0B16");
