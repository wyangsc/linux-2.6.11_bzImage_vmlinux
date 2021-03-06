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
	{ 0x526a0f62, "cpufreq_frequency_table_verify" },
	{ 0x7ae1ae8e, "cpufreq_frequency_table_put_attr" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x5a66df2b, "cpufreq_frequency_table_cpuinfo" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x215073d1, "cpu_callout_map" },
	{ 0xd5184c7, "cpufreq_freq_attr_scaling_available_freqs" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xf5aeff0f, "acpi_processor_register_performance" },
	{ 0xb6774179, "cpufreq_gov_performance" },
	{ 0xdd132261, "printk" },
	{ 0xe6488b47, "cpufreq_notify_transition" },
	{ 0x3a00beb0, "acpi_processor_unregister_performance" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xff9f71d7, "cpu_data" },
	{ 0xefe33a5f, "acpi_processor_notify_smm" },
	{ 0x20267f8c, "cpu_online_map" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x706b3a33, "cpufreq_frequency_table_get_attr" },
	{ 0x1000e51, "schedule" },
	{ 0xd715c451, "set_cpus_allowed" },
	{ 0x37a0cba, "kfree" },
	{ 0xff50f50d, "cpufreq_unregister_driver" },
	{ 0x4cbbd171, "__bitmap_weight" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x15d3ea8e, "cpufreq_frequency_table_target" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xe26ce83a, "cpufreq_register_driver" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "533BB7E5866E52F63B9ACCB");
