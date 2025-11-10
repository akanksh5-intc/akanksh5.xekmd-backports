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

KSYMTAB_FUNC(backport_dependency_symbol, "_gpl", "");
KSYMTAB_FUNC(backport_ptrace_may_access, "_gpl", "");
KSYMTAB_FUNC(pci_iov_vf_bar_set_size, "", "");
KSYMTAB_FUNC(pci_iov_vf_bar_get_sizes, "", "");
KSYMTAB_FUNC(drm_dev_wedged_event, "", "");
KSYMTAB_FUNC(__drmm_workqueue_release, "", "");
KSYMTAB_FUNC(hrtimer_setup, "_gpl", "");
KSYMTAB_FUNC(access_remote_vm, "", "");

SYMBOL_CRC(backport_dependency_symbol, 0xb43a926b, "_gpl");
SYMBOL_CRC(backport_ptrace_may_access, 0x39073297, "_gpl");
SYMBOL_CRC(pci_iov_vf_bar_set_size, 0x0cb5f80a, "");
SYMBOL_CRC(pci_iov_vf_bar_get_sizes, 0x3e75f19b, "");
SYMBOL_CRC(drm_dev_wedged_event, 0xfb236f95, "");
SYMBOL_CRC(__drmm_workqueue_release, 0x24a2f432, "");
SYMBOL_CRC(hrtimer_setup, 0xb0a0795b, "_gpl");
SYMBOL_CRC(access_remote_vm, 0xae32f0b6, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x3f4c7bb6, "pci_rebar_get_possible_sizes" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x96848186, "scnprintf" },
	{ 0x2b7c6499, "__put_task_struct" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0xbdf59ce7, "pcpu_hot" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf2a852d8, "ns_capable_noaudit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x61134f2d, "dev_driver_string" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf961466, "access_process_vm" },
	{ 0xf61eab93, "_dev_info" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x712b41d4, "kobject_uevent_env" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x19661d52, "ns_capable" },
	{ 0x3c37d713, "param_ops_charp" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x56470118, "__warn_printk" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd2c17d0d, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B69379085173958A8293AD2");
