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
	{ 0x3fd9b163, "capi20_release" },
	{ 0xe19a11ac, "capi20_get_profile" },
	{ 0xbaf3124f, "capi20_set_callback" },
	{ 0xaa1ff7d2, "capi20_register" },
	{ 0x349cba85, "strchr" },
	{ 0x1a6edf6b, "remove_proc_entry" },
	{ 0xec61abe5, "create_proc_entry" },
	{ 0x4af9e110, "del_timer" },
	{ 0xabc32741, "wake_up_process" },
	{ 0xdd977210, "register_isdn" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xe914e41e, "strcpy" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x79312f78, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x14f2aa5a, "capi20_get_version" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x7e6f1307, "capi20_get_manufacturer" },
	{ 0x86b34e42, "skb_under_panic" },
	{ 0xf263188a, "skb_realloc_headroom" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x85abc85f, "strncmp" },
	{ 0x6057c6f3, "capi_message2cmsg" },
	{ 0xd45b5eb5, "capi_cmsg2str" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0x47d3fc51, "capi_info2str" },
	{ 0xb19fda8d, "capi_cmd2str" },
	{ 0xb60e5e5f, "capi_cmsg_header" },
	{ 0xfc395a02, "__kfree_skb" },
	{ 0xbd8e4fb3, "capi20_put_message" },
	{ 0x6067a146, "memcpy" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x50b33ca4, "capi_cmsg2message" },
	{ 0xdd132261, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0x8abac70a, "param_set_uint" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,isdn";


MODULE_INFO(srcversion, "2A15F2816B231C4054F5DC4");
