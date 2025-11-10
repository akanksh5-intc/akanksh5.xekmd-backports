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

KSYMTAB_FUNC(intel_pmt_is_early_client_hw, "_gpl", "INTEL_PMT");
KSYMTAB_FUNC(pmt_telem_read_mmio, "_gpl", "INTEL_PMT");
KSYMTAB_DATA(intel_pmt_class, "_gpl", "");
KSYMTAB_FUNC(intel_pmt_dev_create, "_gpl", "INTEL_PMT");
KSYMTAB_FUNC(intel_pmt_dev_destroy, "_gpl", "INTEL_PMT");

SYMBOL_CRC(intel_pmt_is_early_client_hw, 0xb85664f4, "_gpl");
SYMBOL_CRC(pmt_telem_read_mmio, 0x0129e14e, "_gpl");
SYMBOL_CRC(intel_pmt_class, 0x3ed304d3, "_gpl");
SYMBOL_CRC(intel_pmt_dev_create, 0x5bd6e62d, "_gpl");
SYMBOL_CRC(intel_pmt_dev_destroy, 0xac278435, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xae6490b6, "device_unregister" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x65cc9b64, "sysfs_create_bin_file" },
	{ 0xb836712d, "remap_pfn_range" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0x98378a1d, "cc_mkdec" },
	{ 0x84158fd7, "_dev_err" },
	{ 0x239edf5a, "device_create" },
	{ 0xaa0acf6, "class_unregister" },
	{ 0x87865691, "sysfs_create_group" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x745a981, "xa_erase" },
	{ 0xa6f69ea9, "sysfs_remove_group" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf4e41aef, "devm_ioremap_resource" },
	{ 0xaff12a85, "boot_cpu_data" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x1704b84c, "sysfs_remove_bin_file" },
	{ 0xc9195623, "class_register" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xd2c17d0d, "module_layout" },
};

MODULE_INFO(depends, "xe-compat");


MODULE_INFO(srcversion, "00CDDE1E90635B1A6258912");
