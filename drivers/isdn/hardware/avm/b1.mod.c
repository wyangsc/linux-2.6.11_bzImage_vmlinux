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
	{ 0xfc395a02, "__kfree_skb" },
	{ 0x8f699913, "capilib_release" },
	{ 0x349cba85, "strchr" },
	{ 0x2baa6586, "capilib_new_ncci" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xaa165d27, "capilib_release_appl" },
	{ 0x2b8eab1f, "capilib_free_ncci" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6876581b, "raise_softirq_irqoff" },
	{ 0xf2945eb2, "capi_ctr_handle_message" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x29956b63, "skb_queue_purge" },
	{ 0x3fa03a97, "memset" },
	{ 0xdd5ae08c, "capi_ctr_resume_output" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x864dbdf6, "alloc_skb" },
	{ 0x69b3ff13, "capi_ctr_ready" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0x672144bd, "strlcpy" },
	{ 0x71e8d5ba, "capilib_data_b3_req" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xabbf94d5, "capi_ctr_suspend_output" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0x2e284d6b, "capi_ctr_reseted" },
	{ 0xeac674e7, "skb_over_panic" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x62e32d43, "capilib_data_b3_conf" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf63657f0, "per_cpu__softnet_data" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=kernelcapi";


MODULE_INFO(srcversion, "42CE0725CB637F50DD31989");
