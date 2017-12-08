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
	{ 0x25ec1b28, "strlen" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x5f732fad, "scsi_target_resume" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x7a0863c0, "schedule_work" },
	{ 0x481f468b, "scsi_allocate_request" },
	{ 0x7e9bf48a, "anon_transport_class_register" },
	{ 0x982f18c5, "attribute_container_unregister" },
	{ 0xba5eb7e0, "scsi_release_request" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x54ce2bea, "scsi_device_quiesce" },
	{ 0x878aafdc, "scsi_is_host_device" },
	{ 0x3fa03a97, "memset" },
	{ 0xdd132261, "printk" },
	{ 0x85abc85f, "strncmp" },
	{ 0x4649b559, "attribute_container_register" },
	{ 0x4e7031d1, "transport_class_unregister" },
	{ 0x6d8bfd7, "scsi_request_normalize_sense" },
	{ 0x42c1f421, "scsi_device_put" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0xd1cdec3e, "scsi_device_set_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x5549f1de, "scsi_target_quiesce" },
	{ 0x28e7b5cf, "scsi_is_target_device" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xaf25400d, "snprintf" },
	{ 0x1d9aaba6, "scsi_wait_req" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x364960cd, "scsi_device_get" },
	{ 0x8bf5e623, "anon_transport_class_unregister" },
	{ 0xebbdfa6, "scsi_is_sdev_device" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A3F8F4AA9037EAC4BE5422A");
