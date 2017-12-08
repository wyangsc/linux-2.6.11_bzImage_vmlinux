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
	{ 0x6a7d43ca, "unregister_qdisc" },
	{ 0x17f63147, "register_qdisc" },
	{ 0x4af9e110, "del_timer" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x79312f78, "mod_timer" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
	{ 0xa7fe076b, "gnet_stats_copy_app" },
	{ 0x784f5941, "gnet_stats_copy_queue" },
	{ 0xf194c8af, "gnet_stats_copy_basic" },
	{ 0xd0f95f2, "___pskb_trim" },
	{ 0xd6caef04, "__rta_fill" },
	{ 0x312d383a, "tc_classify" },
	{ 0x15dc4bdb, "qdisc_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xabc32741, "wake_up_process" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xe1a9b863, "noop_qdisc" },
	{ 0xcd227ef, "qdisc_create_dflt" },
	{ 0x30f6395d, "pfifo_qdisc_ops" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xcfc6d5f, "qdisc_unlock_tree" },
	{ 0xff102880, "qdisc_lock_tree" },
	{ 0xe49414e9, "rtattr_parse" },
	{ 0x2bfc003b, "qdisc_reset" },
	{ 0xdd132261, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x92f67838, "rb_last" },
	{ 0x7ee8c5cb, "rb_erase" },
	{ 0x7d11c268, "jiffies" },
	{ 0x44ba0f42, "rb_next" },
	{ 0xf6c3815e, "rb_first" },
	{ 0x7ec51f67, "rb_insert_color" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "327F7AD954B5FB00D001E18");
