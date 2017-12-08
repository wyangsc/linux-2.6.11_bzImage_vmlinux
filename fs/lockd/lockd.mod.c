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
	{ 0x99b31a1b, "proc_dointvec_minmax" },
	{ 0x8e9d2ff, "locks_copy_lock" },
	{ 0xc0014b1a, "module_refcount" },
	{ 0x8ce16b3f, "__kmalloc" },
	{ 0xc1fb931, "rpc_create_client" },
	{ 0x499dc8e1, "rpc_destroy_client" },
	{ 0x36d02a13, "register_sysctl_table" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xfc0be827, "rpc_call_async" },
	{ 0x28e52957, "autoremove_wake_function" },
	{ 0xbf5cb6c2, "smp_processor_id" },
	{ 0x55ec09bd, "malloc_sizes" },
	{ 0x1be57115, "xdr_decode_netobj" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xabc0fe0c, "xdr_encode_string" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x2ee9fcdc, "_spin_lock" },
	{ 0xd2d41c1c, "rpc_restart_call" },
	{ 0xb67e16ad, "_spin_lock_irqsave" },
	{ 0xf2c42bb, "xprt_create_proto" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xbabf0f35, "rpciod_down" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd533bec7, "__might_sleep" },
	{ 0xd3f2eb5e, "xprt_destroy" },
	{ 0x375492a4, "rpciod_up" },
	{ 0x6705563c, "_atomic_dec_and_lock" },
	{ 0xf355a49f, "svc_create_thread" },
	{ 0x4e609488, "svc_makesock" },
	{ 0x646a4b75, "rpc_delay" },
	{ 0x3fa03a97, "memset" },
	{ 0x438e1d2f, "rpc_call_sync" },
	{ 0x6dd9a704, "svc_create" },
	{ 0xa3ff3813, "svc_destroy" },
	{ 0x53445f68, "nlm_debug" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xdd132261, "printk" },
	{ 0x16ac7560, "_spin_lock_irq" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0xbce67dc0, "xprt_set_timeout" },
	{ 0x7b9d87b, "proc_doulongvec_minmax" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0xdc304d77, "_spin_unlock_irqrestore" },
	{ 0x1997a9b4, "svc_process" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x83cce626, "_spin_unlock" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0x6314e42c, "flush_signals" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0x44573a8c, "posix_lock_file_wait" },
	{ 0xb19694f7, "kmem_cache_alloc" },
	{ 0x712f7dbf, "locks_init_lock" },
	{ 0xb12cdfe7, "system_utsname" },
	{ 0x7b0d49b3, "unregister_sysctl_table" },
	{ 0x29c6f164, "xdr_encode_netobj" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0xe0060532, "posix_locks_deadlock" },
	{ 0xb771d71a, "__module_put_and_exit" },
	{ 0xabc32741, "wake_up_process" },
	{ 0x7ded8240, "param_get_ulong" },
	{ 0x46bdd8d1, "__wake_up" },
	{ 0x6e85119d, "file_lock_list" },
	{ 0x6c6d7409, "posix_unblock_lock" },
	{ 0x3bd269b2, "svc_exit_thread" },
	{ 0x5403c35b, "posix_lock_file" },
	{ 0x37a0cba, "kfree" },
	{ 0x932da67e, "kill_proc" },
	{ 0x6067a146, "memcpy" },
	{ 0x2df8c621, "prepare_to_wait" },
	{ 0x5773f8b1, "interruptible_sleep_on_timeout" },
	{ 0x1620a668, "sleep_on_timeout" },
	{ 0x72f2c36f, "finish_wait" },
	{ 0x7ca341af, "kernel_thread" },
	{ 0x1042cbb5, "__up_wakeup" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xe9ac4a5d, "svc_recv" },
	{ 0x7a7ef853, "__down_failed" },
	{ 0x7bd87272, "xdr_decode_string_inplace" },
	{ 0x1bbc7cb4, "posix_block_lock" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0xae52aab7, "_spin_unlock_irq" },
	{ 0x6ae81977, "svc_wake_up" },
	{ 0xc3315cf8, "posix_test_lock" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=sunrpc";


MODULE_INFO(srcversion, "DE0CCBC082ABBAA327533A8");
