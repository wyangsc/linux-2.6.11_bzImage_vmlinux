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
	{ 0xc192d491, "unregister_chrdev" },
	{ 0x8b36d7a4, "driver_unregister" },
	{ 0xa304f4be, "scsi_register_driver" },
	{ 0xdbd4b92d, "register_chrdev" },
	{ 0x42c2e14e, "put_disk" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x1075bf0, "panic" },
	{ 0xfbfdbec4, "alloc_disk" },
	{ 0xf2ee1654, "class_simple_destroy" },
	{ 0xe2f1e52c, "class_simple_device_remove" },
	{ 0x3d7082c0, "class_device_create_file" },
	{ 0xf99c9f6a, "class_simple_device_add" },
	{ 0xa468b848, "class_simple_create" },
	{ 0x6098dac0, "driver_remove_file" },
	{ 0xec31d1b8, "driver_create_file" },
	{ 0xaf25400d, "snprintf" },
	{ 0x25ec1b28, "strlen" },
	{ 0x47bfaf50, "__free_pages" },
	{ 0xb6c3e8fe, "alloc_pages_current" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x7dceceac, "capable" },
	{ 0x42c1f421, "scsi_device_put" },
	{ 0x364960cd, "scsi_device_get" },
	{ 0x283a7119, "_write_unlock" },
	{ 0xe6d1217e, "_write_lock" },
	{ 0x3a8f9242, "nonseekable_open" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x94f3c65b, "scsi_block_when_processing_errors" },
	{ 0xccd52b12, "__down_failed_interruptible" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x198a4ade, "scsi_ioctl" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0x672144bd, "strlcpy" },
	{ 0x85abc85f, "strncmp" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0x6067a146, "memcpy" },
	{ 0x3fa03a97, "memset" },
	{ 0xba5eb7e0, "scsi_release_request" },
	{ 0xb3bf19d1, "wait_for_completion" },
	{ 0xf99aa8be, "scsi_do_req" },
	{ 0x481f468b, "scsi_allocate_request" },
	{ 0x397be676, "complete" },
	{ 0x6c1e8b8f, "scsi_print_req_sense" },
	{ 0xdd132261, "printk" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F04B7400A75F5ADB672F78B");
