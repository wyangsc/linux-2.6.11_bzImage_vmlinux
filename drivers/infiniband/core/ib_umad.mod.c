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
	{ 0x328af9ec, "cdev_del" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xcd47c4b1, "cdev_init" },
	{ 0xb887523b, "kref_put" },
	{ 0xfdbcb144, "class_register" },
	{ 0xd8e484f0, "register_chrdev_region" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0x7dcae935, "ib_register_mad_agent" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xa0b2e926, "ib_free_recv_mad" },
	{ 0x35c9e4e2, "__down_write" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xc5cc19a9, "kobject_set_name" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x6f4e0023, "class_device_unregister" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0x59a2ac08, "ib_destroy_ah" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0x8c7a3e90, "ib_get_dma_mr" },
	{ 0x498dc803, "init_rwsem" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x379ddd86, "class_unregister" },
	{ 0x339f0d7f, "ib_get_client_data" },
	{ 0x699ce795, "find_next_zero_bit" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xe9a60ad6, "__down_failed_trylock" },
	{ 0x3d7082c0, "class_device_create_file" },
	{ 0xccd52b12, "__down_failed_interruptible" },
	{ 0x5d5b82d, "__up_read" },
	{ 0x18819ea8, "class_create_file" },
	{ 0x3d130f90, "__up_write" },
	{ 0x692871a6, "ib_set_client_data" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xcc7ef4e5, "ib_post_send_mad" },
	{ 0x603c1ee, "cdev_add" },
	{ 0xdb127f7b, "ib_unregister_mad_agent" },
	{ 0x3519f459, "ib_register_client" },
	{ 0xe3fd10ea, "ib_create_ah" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x1000e51, "schedule" },
	{ 0xa0c5577e, "class_device_register" },
	{ 0x21f5223f, "ib_dereg_mr" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0xe7826443, "ib_modify_port" },
	{ 0x3ae831b6, "kref_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0x8a1203a9, "kref_get" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xaf25400d, "snprintf" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xb203e760, "__down_read" },
	{ 0x9104fe6e, "ib_unregister_client" },
	{ 0xae52aab7, "_spin_unlock_irq" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ib_mad,ib_core";


MODULE_INFO(srcversion, "1E1A2098C2557C239C6DD14");
