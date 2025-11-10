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

KSYMTAB_FUNC(pmt_telem_get_next_endpoint, "_gpl", "INTEL_PMT_TELEMETRY");
KSYMTAB_FUNC(pmt_telem_register_endpoint, "_gpl", "INTEL_PMT_TELEMETRY");
KSYMTAB_FUNC(pmt_telem_unregister_endpoint, "_gpl", "INTEL_PMT_TELEMETRY");
KSYMTAB_FUNC(pmt_telem_get_endpoint_info, "_gpl", "INTEL_PMT_TELEMETRY");
KSYMTAB_FUNC(intel_pmt_get_regions_by_feature, "", "");
KSYMTAB_FUNC(intel_pmt_put_feature_group, "", "");
KSYMTAB_FUNC(pmt_telem_read, "_gpl", "INTEL_PMT_TELEMETRY");
KSYMTAB_FUNC(pmt_telem_read32, "_gpl", "INTEL_PMT_TELEMETRY");
KSYMTAB_FUNC(pmt_telem_find_and_register_endpoint, "_gpl", "INTEL_PMT_TELEMETRY");

SYMBOL_CRC(pmt_telem_get_next_endpoint, 0xd71cecee, "_gpl");
SYMBOL_CRC(pmt_telem_register_endpoint, 0x3ee3ceec, "_gpl");
SYMBOL_CRC(pmt_telem_unregister_endpoint, 0x372e8784, "_gpl");
SYMBOL_CRC(pmt_telem_get_endpoint_info, 0x3c2bb4a9, "_gpl");
SYMBOL_CRC(intel_pmt_get_regions_by_feature, 0xcaf09953, "");
SYMBOL_CRC(intel_pmt_put_feature_group, 0xbb3dae0b, "");
SYMBOL_CRC(pmt_telem_read, 0xa4e8061f, "_gpl");
SYMBOL_CRC(pmt_telem_read32, 0x7eaffda0, "_gpl");
SYMBOL_CRC(pmt_telem_find_and_register_endpoint, 0x2de36ce8, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9cd1e773, "devm_kmalloc" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x26b8d34d, "auxiliary_driver_unregister" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb85664f4, "intel_pmt_is_early_client_hw" },
	{ 0x67982251, "intel_vsec_get_mapping" },
	{ 0x4c03a563, "random_kmalloc_seed" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xac278435, "intel_pmt_dev_destroy" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0x8fa25c24, "xa_find" },
	{ 0x5206ce77, "__auxiliary_driver_register" },
	{ 0xf7e93d54, "kmalloc_trace" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x5bd6e62d, "intel_pmt_dev_create" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe31819e4, "kmalloc_caches" },
	{ 0x129e14e, "pmt_telem_read_mmio" },
	{ 0xd2c17d0d, "module_layout" },
};

MODULE_INFO(depends, "pmt_class,intel-vsec,xe-compat");

MODULE_ALIAS("auxiliary:intel_vsec.telemetry");

MODULE_INFO(srcversion, "BCA9B3D727815AF6B32D646");
