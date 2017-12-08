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
	{ 0x3fa6c390, "crypto_hmac_final" },
	{ 0x88a07d46, "skb_icv_walk" },
	{ 0x94c80311, "crypto_hmac_update" },
	{ 0x4ee1c25f, "crypto_hmac_init" },
	{ 0x3fa03a97, "memset" },
	{ 0x93671e8c, "inet_del_protocol" },
	{ 0x7239748c, "xfrm_unregister_type" },
	{ 0x7c3acc60, "inet_add_protocol" },
	{ 0x2337cf1b, "xfrm_register_type" },
	{ 0x7a5b0809, "xfrm4_rcv" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x217ef805, "xfrm_aalg_get_byname" },
	{ 0xe53fbd53, "crypto_alloc_tfm" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x66f65649, "crypto_free_tfm" },
	{ 0xbab9bacf, "__xfrm_state_destroy" },
	{ 0xdd132261, "printk" },
	{ 0x743a435e, "xfrm_state_lookup" },
	{ 0x4261b7b3, "km_new_mapping" },
	{ 0xd0f95f2, "___pskb_trim" },
	{ 0x29dfa6d0, "skb_copy_bits" },
	{ 0xe7a331d5, "__pskb_pull_tail" },
	{ 0xa37b7441, "ip_send_check" },
	{ 0x37a0cba, "kfree" },
	{ 0x1b7d6a2d, "skb_to_sgvec" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x6067a146, "memcpy" },
	{ 0xb72f620d, "pskb_put" },
	{ 0xffeee880, "skb_cow_data" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3FF6F87417234396F90E503");
