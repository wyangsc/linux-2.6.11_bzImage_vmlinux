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
	{ 0x93671e8c, "inet_del_protocol" },
	{ 0x7239748c, "xfrm_unregister_type" },
	{ 0x7c3acc60, "inet_add_protocol" },
	{ 0x2337cf1b, "xfrm_register_type" },
	{ 0x7a5b0809, "xfrm4_rcv" },
	{ 0x4c9bd9e3, "xfrm_calg_get_byname" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x9897ad11, "xfrm_state_delete_tunnel" },
	{ 0xe53fbd53, "crypto_alloc_tfm" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x66f65649, "crypto_free_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x55f2580b, "__alloc_percpu" },
	{ 0xd012c83a, "free_percpu" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x215073d1, "cpu_callout_map" },
	{ 0x52927677, "xfrm_state_insert" },
	{ 0x92cbb43e, "xfrm_get_type" },
	{ 0xb009500a, "xfrm_state_alloc" },
	{ 0xbab9bacf, "__xfrm_state_destroy" },
	{ 0xdd132261, "printk" },
	{ 0x743a435e, "xfrm_state_lookup" },
	{ 0xa37b7441, "ip_send_check" },
	{ 0xd0f95f2, "___pskb_trim" },
	{ 0x39a53491, "__skb_linearize" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x6067a146, "memcpy" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0xa7ed457a, "pskb_expand_head" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x4c6ff041, "add_preempt_count" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "38202FF88F717265D618B00");
