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
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x37a0cba, "kfree" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x2f849e07, "crypto_alg_available" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0x7586189d, "crypto_hmac" },
	{ 0x66f65649, "crypto_free_tfm" },
	{ 0x3fa03a97, "memset" },
	{ 0xd503383a, "node_data" },
	{ 0xa8ce087b, "memnodemap" },
	{ 0x676c5f99, "memnode_shift" },
	{ 0xe53fbd53, "crypto_alloc_tfm" },
	{ 0x6067a146, "memcpy" },
	{ 0xdd132261, "printk" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8A43EC7820FB4783A79358D");
