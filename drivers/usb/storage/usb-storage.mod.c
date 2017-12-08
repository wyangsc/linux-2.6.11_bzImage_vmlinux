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
	{ 0x408d4f3, "__mod_timer" },
	{ 0xd3987aac, "usb_buffer_alloc" },
	{ 0x3f600458, "complete_and_exit" },
	{ 0xe7ccea08, "scsi_host_alloc" },
	{ 0x28c3108d, "usb_sg_wait" },
	{ 0x25ec1b28, "strlen" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x1719edb9, "blk_queue_max_sectors" },
	{ 0xe24e33a0, "usb_buffer_free" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xd6d5063a, "usb_unlink_urb" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xb3bf19d1, "wait_for_completion" },
	{ 0xfe3df95e, "del_timer_sync" },
	{ 0x73dd4bd9, "usb_string" },
	{ 0x53949f82, "usb_lock_device_for_reset" },
	{ 0x44c527e7, "usb_deregister" },
	{ 0xdd132261, "printk" },
	{ 0x859204af, "sscanf" },
	{ 0x1fd56ed2, "scsi_add_host" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0x672144bd, "strlcpy" },
	{ 0x199f8774, "scsi_scan_host" },
	{ 0xccd52b12, "__down_failed_interruptible" },
	{ 0x1f1b676d, "scsi_host_put" },
	{ 0xd1ff72eb, "zone_table" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0x10b3c308, "usb_submit_urb" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x65f5f115, "usb_reset_device" },
	{ 0x72216fa9, "param_get_uint" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x8607fe00, "refrigerator" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x9da51506, "usb_sg_cancel" },
	{ 0xa30aea4a, "usb_register" },
	{ 0x583ac8a7, "usb_unlock_device" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0x8abac70a, "param_set_uint" },
	{ 0xcf345583, "blk_queue_dma_alignment" },
	{ 0x754f631a, "usb_sg_init" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0x7ca341af, "kernel_thread" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0x9c22a070, "scsi_remove_host" },
	{ 0x397be676, "complete" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x15529b4d, "usb_free_urb" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0x646ff2d3, "scsi_report_device_reset" },
	{ 0x67d6f733, "usb_alloc_urb" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v03EEp6901dl0000dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p0107dl0200dh0200dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0411p001Cdl0113dh0113dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0482p0100dl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0482p0101dl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0482p0103dl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0482p0105dl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04A4p0004dl0001dh0001dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04B8p0601dl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04B8p0602dl0110dh0110dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04CBp0100dl0000dh2210dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04CEp0002dl0074dh0074dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04DAp0901dl0100dh0200dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04DAp0D05dl0000dh0000dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04DAp2372dl0000dh9999dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E6p0001dl0200dh0200dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E6p0002dl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E6p0006dl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E6p0006dl0205dh0205dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E6p0007dl0100dh0200dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E6p0009dl0200dh0200dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E6p000Adl0200dh0200dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E6p000Bdl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E6p000Cdl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E6p0101dl0200dh0200dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04FCp80C2dl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp0115dl0133dh0133dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0525pA140dl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v052Bp1801dl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v052Bp1804dl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v052Bp1807dl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v052Bp1905dl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v052Bp1911dl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0010dl0106dh0450dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0010dl0500dh0500dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0025dl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp002Ddl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp002Edl0106dh0310dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp002Edl0500dh0500dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0032dl0000dh9999dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0058dl0000dh9999dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0069dl0000dh9999dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp006Ddl0000dh9999dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp016Adl0000dh9999dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0099dl0000dh9999dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v057Bp0000dl0000dh0299dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v057Bp0000dl0300dh9999dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v057Bp0022dl0000dh9999dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0595p4343dl0000dh2210dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v059FpA601dl0200dh0200dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05ABp0060dl1104dh1110dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05ACp1203dl0001dh0001dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05DCpB002dl0000dh0113dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0636p0003dl0000dh9999dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0644p0000dl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v066Fp8000dl0001dh0001dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067Bp3507dl0001dh0001dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067Bp3507dl0001dh0001dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0686p4011dl0001dh0001dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0686p4017dl0001dh0001dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0693p0002dl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0693p0005dl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0781p0001dl0200dh0200dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0781p0002dl0009dh0009dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0781p0100dl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07ABpFCCDdl0406dh0406dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07AFp0004dl0100dh0133dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07AFp0005dl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07C4pA400dl0000dhFFFFdc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07CFp1001dl1000dh9999dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0839p000Adl0001dh0001dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v084Dp0011dl0110dh0110dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v090Ap1001dl0100dh0100dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v090Ap1200dl0000dh9999dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v090Cp1132dl0000dhFFFFdc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0A17p0004dl1000dh1000dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0A17p0006dl0000dhFFFFdc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0D96p410Adl0001dhFFFFdc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0D96p5200dl0001dh0200dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DD8p1060dl0000dhFFFFdc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DDAp0001dl0012dh0012dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0ED1p6660dl0100dh0300dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0EA0p2168dl0110dh0110dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0EA0p6828dl0110dh0110dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1019p0C55dl0000dh9999dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1370p6828dl0110dh0110dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic08isc01ip01*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic08isc02ip01*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic08isc03ip01*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic08isc04ip01*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic08isc05ip01*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic08isc06ip01*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic08isc01ip00*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic08isc02ip00*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic08isc03ip00*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic08isc04ip00*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic08isc05ip00*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic08isc06ip00*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic08isc01ip50*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic08isc02ip50*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic08isc03ip50*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic08isc04ip50*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic08isc05ip50*");
MODULE_ALIAS("usb:v*p*dl*dh*dc*dsc*dp*ic08isc06ip50*");

MODULE_INFO(srcversion, "47E8E9467ECD81D492235A3");
