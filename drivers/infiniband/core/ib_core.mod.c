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
	{ 0x1d8a43b8, "kobject_put" },
	{ 0x74ca620a, "kobject_get" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x900b315c, "get_zeroed_page" },
	{ 0xfdbcb144, "class_register" },
	{ 0x349cba85, "strchr" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x76f826aa, "_write_unlock_irq" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0xc5cc19a9, "kobject_set_name" },
	{ 0x89b384c, "kobject_unregister" },
	{ 0x6f4e0023, "class_device_unregister" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xe4ca92e1, "sysfs_remove_group" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x3fa03a97, "memset" },
	{ 0xdd132261, "printk" },
	{ 0x859204af, "sscanf" },
	{ 0x9fddc895, "kthread_stop" },
	{ 0x7e34d7eb, "sysfs_create_group" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x379ddd86, "class_unregister" },
	{ 0x85abc85f, "strncmp" },
	{ 0x672144bd, "strlcpy" },
	{ 0x3d7082c0, "class_device_create_file" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xcec83301, "_read_unlock_irqrestore" },
	{ 0xc15cd12d, "_read_lock_irqsave" },
	{ 0xb3d2bf12, "find_first_zero_bit" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x79aba27d, "add_hotplug_env_var" },
	{ 0x1000e51, "schedule" },
	{ 0x7de30230, "_write_lock_irq" },
	{ 0xa0c5577e, "class_device_register" },
	{ 0xabc32741, "wake_up_process" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xb3eaa9e7, "kthread_create" },
	{ 0x6067a146, "memcpy" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xaf25400d, "snprintf" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x47c8d6d4, "kobject_register" },
	{ 0xae52aab7, "_spin_unlock_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "896726187EC01D6752ADD78");
