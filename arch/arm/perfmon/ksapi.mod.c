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
	{ 0xcff08ff0, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x137dd7b5, "pp_interrupt_in_ptr" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xba553557, "remove_proc_entry" },
	{ 0x892b8acc, "atomic_notifier_chain_unregister" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf3934df5, "pp_loaded" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xb0d4e406, "proc_mkdir" },
	{ 0xf4b48a10, "thread_notify_head" },
	{ 0x27e1a049, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0xbe267192, "pp_process_remove_ptr" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xdc5aad31, "pp_interrupt_out_ptr" },
	{ 0xf74bd974, "pm_op_lock" },
	{ 0xe5a2ba33, "atomic_notifier_chain_register" },
	{ 0x7c62d042, "cpu_possible_mask" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x1bb6aeb, "create_proc_entry" },
	{ 0xd11d43bb, "kmem_cache_alloc_trace" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

