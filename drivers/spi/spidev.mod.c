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
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x18da8e34, "no_llseek" },
	{ 0x9071ebed, "spi_new_device" },
	{ 0x6691f9c9, "spi_busnum_to_master" },
	{ 0x9d669763, "memcpy" },
	{ 0xaecc4cfb, "spi_register_driver" },
	{ 0xc9c4c1b3, "__class_create" },
	{ 0x3d12543a, "__register_chrdev" },
	{ 0xff336707, "put_device" },
	{ 0xa51d255a, "spi_setup" },
	{ 0xec6fbc88, "get_device" },
	{ 0x4f7f2d1b, "complete" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x2fd61cd, "wait_for_completion" },
	{ 0x6c9eb35d, "spi_async" },
	{ 0x5f754e5a, "memset" },
	{ 0x4588bf0f, "__dynamic_pr_debug" },
	{ 0x884a5f6a, "nonseekable_open" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xc1b20177, "class_destroy" },
	{ 0x876ca62e, "driver_unregister" },
	{ 0xec9addc8, "device_unregister" },
	{ 0xcff08ff0, "kmalloc_caches" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4b6d435, "dev_printk" },
	{ 0x27e32fc5, "device_create" },
	{ 0xd3dbfbc4, "_find_first_zero_bit_le" },
	{ 0xe830af4e, "__mutex_init" },
	{ 0xd11d43bb, "kmem_cache_alloc_trace" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x73e9be07, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x8f84631c, "device_destroy" },
	{ 0x97f9b378, "mutex_lock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xeee2d147, "dev_set_drvdata" },
	{ 0xd59daefe, "_raw_spin_lock_irq" },
	{ 0xda7758b0, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

