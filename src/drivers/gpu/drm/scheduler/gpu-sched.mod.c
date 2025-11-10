#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(drm_sched_tdr_queue_imm, "", "");
KSYMTAB_FUNC(drm_sched_fault, "", "");
KSYMTAB_FUNC(drm_sched_suspend_timeout, "", "");
KSYMTAB_FUNC(drm_sched_resume_timeout, "", "");
KSYMTAB_FUNC(drm_sched_stop, "", "");
KSYMTAB_FUNC(drm_sched_start, "", "");
KSYMTAB_FUNC(drm_sched_resubmit_jobs, "", "");
KSYMTAB_FUNC(drm_sched_job_init, "", "");
KSYMTAB_FUNC(drm_sched_job_arm, "", "");
KSYMTAB_FUNC(drm_sched_job_add_dependency, "", "");
KSYMTAB_FUNC(drm_sched_job_add_syncobj_dependency, "", "");
KSYMTAB_FUNC(drm_sched_job_add_resv_dependencies, "", "");
KSYMTAB_FUNC(drm_sched_job_add_implicit_dependencies, "", "");
KSYMTAB_FUNC(drm_sched_job_has_dependency, "", "");
KSYMTAB_FUNC(drm_sched_job_cleanup, "", "");
KSYMTAB_FUNC(drm_sched_pick_best, "", "");
KSYMTAB_FUNC(drm_sched_init, "", "");
KSYMTAB_FUNC(drm_sched_fini, "", "");
KSYMTAB_FUNC(drm_sched_increase_karma, "", "");
KSYMTAB_FUNC(drm_sched_wqueue_ready, "", "");
KSYMTAB_FUNC(drm_sched_wqueue_stop, "", "");
KSYMTAB_FUNC(drm_sched_wqueue_start, "", "");
KSYMTAB_FUNC(to_drm_sched_fence, "", "");
KSYMTAB_FUNC(drm_sched_entity_init, "", "");
KSYMTAB_FUNC(drm_sched_entity_modify_sched, "", "");
KSYMTAB_FUNC(drm_sched_entity_error, "", "");
KSYMTAB_FUNC(drm_sched_entity_flush, "", "");
KSYMTAB_FUNC(drm_sched_entity_fini, "", "");
KSYMTAB_FUNC(drm_sched_entity_destroy, "", "");
KSYMTAB_FUNC(drm_sched_entity_set_priority, "", "");
KSYMTAB_FUNC(drm_sched_entity_push_job, "", "");

SYMBOL_CRC(drm_sched_tdr_queue_imm, 0xb718eade, "");
SYMBOL_CRC(drm_sched_fault, 0x693f3e49, "");
SYMBOL_CRC(drm_sched_suspend_timeout, 0x49682a9b, "");
SYMBOL_CRC(drm_sched_resume_timeout, 0xcd507d18, "");
SYMBOL_CRC(drm_sched_stop, 0x49a889a8, "");
SYMBOL_CRC(drm_sched_start, 0xc1596566, "");
SYMBOL_CRC(drm_sched_resubmit_jobs, 0xa44c3784, "");
SYMBOL_CRC(drm_sched_job_init, 0xe1a3a740, "");
SYMBOL_CRC(drm_sched_job_arm, 0x22481c93, "");
SYMBOL_CRC(drm_sched_job_add_dependency, 0xb1ffe9ae, "");
SYMBOL_CRC(drm_sched_job_add_syncobj_dependency, 0x8fabed5a, "");
SYMBOL_CRC(drm_sched_job_add_resv_dependencies, 0x81605d6b, "");
SYMBOL_CRC(drm_sched_job_add_implicit_dependencies, 0xba441786, "");
SYMBOL_CRC(drm_sched_job_has_dependency, 0xc23fe542, "");
SYMBOL_CRC(drm_sched_job_cleanup, 0x390b2d88, "");
SYMBOL_CRC(drm_sched_pick_best, 0x83f08127, "");
SYMBOL_CRC(drm_sched_init, 0x4d18e3bf, "");
SYMBOL_CRC(drm_sched_fini, 0x3cd3f7ad, "");
SYMBOL_CRC(drm_sched_increase_karma, 0xd3701849, "");
SYMBOL_CRC(drm_sched_wqueue_ready, 0x60b04e5b, "");
SYMBOL_CRC(drm_sched_wqueue_stop, 0x84702d43, "");
SYMBOL_CRC(drm_sched_wqueue_start, 0x05055f0a, "");
SYMBOL_CRC(to_drm_sched_fence, 0x220557a2, "");
SYMBOL_CRC(drm_sched_entity_init, 0xabd6686f, "");
SYMBOL_CRC(drm_sched_entity_modify_sched, 0xf0cb83de, "");
SYMBOL_CRC(drm_sched_entity_error, 0x7292b7f9, "");
SYMBOL_CRC(drm_sched_entity_flush, 0x9d06d612, "");
SYMBOL_CRC(drm_sched_entity_fini, 0x13a3e281, "");
SYMBOL_CRC(drm_sched_entity_destroy, 0x4f896334, "");
SYMBOL_CRC(drm_sched_entity_set_priority, 0x3d248ce8, "");
SYMBOL_CRC(drm_sched_entity_push_job, 0xc4976d8b, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x67bc0606, "drm_syncobj_find_fence" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3fd080a, "trace_raw_output_prep" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xca9360b5, "rb_next" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x4538eca4, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x2fb33709, "trace_event_printf" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x7aa26452, "trace_event_raw_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdf59ce7, "pcpu_hot" },
	{ 0xa537f00f, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x628c0f8f, "dma_fence_add_callback" },
	{ 0xccaf994e, "dma_fence_set_deadline" },
	{ 0xed53be7c, "kmem_cache_create" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x64d11af1, "dma_fence_wait_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x61134f2d, "dev_driver_string" },
	{ 0x28a9a7d7, "trace_event_buffer_commit" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x465c47d5, "dma_resv_iter_next" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x70daa11e, "dma_fence_remove_callback" },
	{ 0xa5e48c16, "kmem_cache_alloc" },
	{ 0xc70277b, "drm_dev_printk" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8b38092, "perf_trace_buf_alloc" },
	{ 0x72f2ce3a, "perf_trace_run_bpf_submit" },
	{ 0x84158fd7, "_dev_err" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xaacf03c1, "dma_fence_signal" },
	{ 0x4c03a563, "random_kmalloc_seed" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x292a803f, "kmem_cache_free" },
	{ 0xbe29f81, "trace_event_reg" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xdeb99119, "dma_fence_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xfe98691d, "bpf_trace_run1" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x32b8c285, "_dev_warn" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x745a981, "xa_erase" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x888e5969, "trace_event_buffer_reserve" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0x8fa25c24, "xa_find" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5b3e282f, "xa_store" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x67284e92, "dma_resv_iter_first" },
	{ 0xf7e93d54, "kmalloc_trace" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0xe118d06c, "param_ops_int" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8b3494ff, "trace_handle_return" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xe31819e4, "kmalloc_caches" },
	{ 0x25bf6b7f, "kmem_cache_destroy" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd2c17d0d, "module_layout" },
};

MODULE_INFO(depends, "xe-compat");


MODULE_INFO(srcversion, "C2C90B211F8C7D20FD20BF5");
