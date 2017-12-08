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
	{ 0x1dafe557, "unregister_ip_vs_scheduler" },
	{ 0x7b0d49b3, "unregister_sysctl_table" },
	{ 0x32d2008d, "register_ip_vs_scheduler" },
	{ 0x36d02a13, "register_sysctl_table" },
	{ 0xec034e5, "_read_unlock" },
	{ 0x4ae6ae89, "_read_lock" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x79312f78, "mod_timer" },
	{ 0xf8625dc3, "proc_dointvec_jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x7d11c268, "jiffies" },
	{ 0x283a7119, "_write_unlock" },
	{ 0xe6d1217e, "_write_lock" },
	{ 0xdd132261, "printk" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ip_vs";


MODULE_INFO(srcversion, "45882C25B53E557FEC8E1C8");
