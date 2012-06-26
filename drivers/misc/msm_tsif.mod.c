#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6d1d2d5c, "module_layout" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xcff08ff0, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7455f403, "__pm_runtime_idle" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x3113a1ff, "clk_enable" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xa2fc414a, "generic_file_llseek" },
	{ 0x9effafa5, "debugfs_create_dir" },
	{ 0x1df32025, "__pm_runtime_disable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x382782f5, "wake_lock_destroy" },
	{ 0xeee2d147, "dev_set_drvdata" },
	{ 0x4b6d435, "dev_printk" },
	{ 0xa196c0af, "clk_disable" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x1a41a5ed, "wake_lock" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x9209b21, "__pm_runtime_resume" },
	{ 0x13bf54b7, "debugfs_create_file" },
	{ 0x4f099aa5, "wake_unlock" },
	{ 0x762f1d1b, "debugfs_remove_recursive" },
	{ 0x8ceb122f, "sysfs_remove_group" },
	{ 0x2e23c0e0, "simple_attr_read" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x31bf6326, "dev_err" },
	{ 0x27e1a049, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0x9fd25c25, "sysfs_create_group" },
	{ 0xe4d14011, "msm_dmov_enqueue_cmd" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa63c7daa, "dma_free_coherent" },
	{ 0x84b183ae, "strncmp" },
	{ 0xe96d436e, "platform_get_resource" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x7055cd5c, "simple_attr_release" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x14f15984, "platform_driver_register" },
	{ 0x2dfc5008, "dma_alloc_coherent" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xd1f0621f, "_dev_info" },
	{ 0x3b15dc2f, "pm_runtime_enable" },
	{ 0xff336707, "put_device" },
	{ 0xeb6a538d, "__pm_runtime_set_status" },
	{ 0xd11d43bb, "kmem_cache_alloc_trace" },
	{ 0xdf9c0d15, "clk_get" },
	{ 0xec6fbc88, "get_device" },
	{ 0xfe990052, "gpio_free" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x89e9d8e5, "wake_lock_init" },
	{ 0x28e40d6f, "debugfs_create_blob" },
	{ 0xb0be0fa0, "msm_dmov_flush" },
	{ 0x6c8d5ae8, "__gpio_get_value" },
	{ 0xd13c760f, "gpio_tlmm_config" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0x2b5de937, "dev_warn" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x3fa66e3e, "platform_get_irq" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x8ff97ceb, "__msm_ioremap" },
	{ 0x96408c78, "platform_driver_unregister" },
	{ 0xda7758b0, "dev_get_drvdata" },
	{ 0x5195c068, "simple_attr_open" },
	{ 0x9e2d02a3, "simple_attr_write" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

