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
	{ 0x55eb2175, "snd_pcm_format_width" },
	{ 0xb57edf8f, "pci_bus_read_config_byte" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xb9cf4743, "snd_ac97_write" },
	{ 0x20ba2fb0, "kcalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xffd65350, "__snd_util_memblk_new" },
	{ 0xbe07abd6, "snd_pcm_period_elapsed" },
	{ 0xebbd4a0d, "snd_dma_alloc_pages" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x5bc0bff9, "pci_disable_device" },
	{ 0x5328434, "snd_pcm_lib_preallocate_free_for_all" },
	{ 0x35c9e4e2, "__down_write" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0x806d5133, "param_array_get" },
	{ 0x92a9136, "snd_util_memhdr_free" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x748e788b, "pci_release_regions" },
	{ 0x2fd1d81c, "vfree" },
	{ 0x7d401409, "snd_pcm_lib_preallocate_pages" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0x396007fc, "snd_rawmidi_set_ops" },
	{ 0xcaa4228, "__snd_util_mem_free" },
	{ 0x1d26aa98, "sprintf" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xa28347b8, "snd_pcm_hw_constraint_integer" },
	{ 0x4047ee1e, "snd_rawmidi_new" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaa136450, "param_get_charp" },
	{ 0x74b9f14, "pci_set_master" },
	{ 0x8f024930, "snd_pcm_sgbuf_ops_page" },
	{ 0x3fa03a97, "memset" },
	{ 0x7413458e, "snd_device_new" },
	{ 0x346738e, "pci_set_dma_mask" },
	{ 0x9391d7f0, "snd_pcm_hw_constraint_list" },
	{ 0x4bc3ca36, "snd_timer_new" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x26f4c679, "snd_pcm_set_ops" },
	{ 0xfe1acc30, "snd_ctl_notify" },
	{ 0xdc76cbcb, "param_set_bool" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0x672144bd, "strlcpy" },
	{ 0x47b31274, "snd_hwdep_new" },
	{ 0x28464707, "snd_pcm_lib_free_pages" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0xb34ec404, "snd_pcm_lib_ioctl" },
	{ 0x5d5b82d, "__up_read" },
	{ 0x3d130f90, "__up_write" },
	{ 0xf14a4f25, "snd_util_memhdr_new" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0x9a635f3b, "__snd_util_mem_alloc" },
	{ 0xc7ad3b0, "snd_pcm_lib_malloc_pages" },
	{ 0x2f0b152f, "snd_iprintf" },
	{ 0x86dd62b9, "snd_card_new" },
	{ 0x7dceceac, "capable" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x6cfe6c1c, "pci_bus_read_config_word" },
	{ 0xab2b15ff, "pci_bus_read_config_dword" },
	{ 0xc6957e75, "snd_ctl_remove_id" },
	{ 0x5271af5d, "request_irq" },
	{ 0x4eb07d95, "snd_ctl_new1" },
	{ 0xd01c9506, "snd_dma_free_pages" },
	{ 0xa6aecb0f, "pci_unregister_driver" },
	{ 0x9da34ad5, "snd_ctl_find_id" },
	{ 0x1843d8ae, "snd_ac97_bus" },
	{ 0x41fbf777, "snd_ctl_remove" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0x418c38c, "snd_ac97_mixer" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0xab491452, "pci_request_regions" },
	{ 0x85af2f64, "snd_timer_interrupt" },
	{ 0x65e34900, "snd_pcm_hw_constraint_minmax" },
	{ 0x597c8e97, "snd_card_proc_new" },
	{ 0x7689741b, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x6c1e877, "snd_card_free" },
	{ 0x9f2954ad, "snd_card_register" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x5611e4ec, "param_get_bool" },
	{ 0x8479d154, "snd_seq_device_new" },
	{ 0xd423dec7, "snd_pcm_new" },
	{ 0x7bce63a8, "snd_ctl_add" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x5d89bbb7, "snd_rawmidi_transmit" },
	{ 0xea9ff97a, "pci_enable_device" },
	{ 0x32248e6d, "pci_set_consistent_dma_mask" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0xb203e760, "__down_read" },
	{ 0x73da131d, "snd_rawmidi_receive" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x90b9a166, "pci_register_driver" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-ac97-codec,snd-util-mem,snd-page-alloc,snd-rawmidi,snd,snd-timer,snd-hwdep,snd-seq-device";

MODULE_ALIAS("pci:v00001102d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000008sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7DF0999C4E4EEC7FD2E0674");
