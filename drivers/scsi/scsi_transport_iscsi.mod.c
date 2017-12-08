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
	{ 0xa1462d03, "transport_class_register" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x982f18c5, "attribute_container_unregister" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x878aafdc, "scsi_is_host_device" },
	{ 0x4649b559, "attribute_container_register" },
	{ 0x4e7031d1, "transport_class_unregister" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x28e7b5cf, "scsi_is_target_device" },
	{ 0xaf25400d, "snprintf" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6D511351278EBFD0A2BC181");
