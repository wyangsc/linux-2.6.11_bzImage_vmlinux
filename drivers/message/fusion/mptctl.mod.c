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
	{ 0x6fb5ab71, "mpt_deregister" },
	{ 0xae4fb61e, "mpt_reset_deregister" },
	{ 0x17c3bdf6, "mpt_device_driver_deregister" },
	{ 0xec2cd46c, "unregister_ioctl32_conversion" },
	{ 0x729bb149, "mpt_reset_register" },
	{ 0x55b3bf05, "misc_deregister" },
	{ 0x286a895a, "mpt_register" },
	{ 0xe2193e8c, "misc_register" },
	{ 0xd19ea46e, "register_ioctl32_conversion" },
	{ 0x51600573, "mpt_device_driver_register" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0x56d862eb, "no_llseek" },
	{ 0x2e933813, "mpt_toolbox" },
	{ 0xe77f4608, "mpt_GetIocState" },
	{ 0x25ec1b28, "strlen" },
	{ 0xb58d850, "mpt_config" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0x94610c9, "mpt_alloc_fw_memory" },
	{ 0xaa90dd4b, "mpt_free_fw_memory" },
	{ 0x445d94a1, "mpt_findImVolumes" },
	{ 0x3fa03a97, "memset" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0xb57edf8f, "pci_bus_read_config_byte" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0x3b0edbf1, "dma_unmap_single" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc3c1d7, "dma_free_coherent" },
	{ 0xa70993e4, "dma_map_single" },
	{ 0x142b1c5f, "dma_alloc_coherent" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x6dd452a8, "mpt_put_msg_frame" },
	{ 0x105d4f47, "mpt_add_sge" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xccd52b12, "__down_failed_interruptible" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xe9a60ad6, "__down_failed_trylock" },
	{ 0xe276e861, "mpt_verify_adapter" },
	{ 0xdd132261, "printk" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x118e26a3, "mpt_free_msg_frame" },
	{ 0xc23dfa1a, "mpt_send_handshake_request" },
	{ 0x78c18f1b, "mpt_get_msg_frame" },
	{ 0xe476978a, "mpt_HardResetHandler" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x6067a146, "memcpy" },
	{ 0x408d4f3, "__mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4af9e110, "del_timer" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "97394D8A3F26B3902590FB0");
