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
	{ 0x15f4b4e7, "crypto_aead_type" },
	{ 0x98545fc4, "crypto_ahash_type" },
	{ 0x1aeed6d2, "crypto_ablkcipher_type" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x14f15984, "platform_driver_register" },
	{ 0x13bf54b7, "debugfs_create_file" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x9effafa5, "debugfs_create_dir" },
	{ 0x57b3377d, "crypto_register_ahash" },
	{ 0xd1f0621f, "_dev_info" },
	{ 0x31bf6326, "dev_err" },
	{ 0x1caecd11, "crypto_register_alg" },
	{ 0xc3593841, "msm_bus_scale_register_client" },
	{ 0x544253c4, "qce_hw_support" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xeee2d147, "dev_set_drvdata" },
	{ 0xd8663321, "qce_open" },
	{ 0xcfd9a2c0, "des_ekey" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x4f7f2d1b, "complete" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0x73e9be07, "mutex_unlock" },
	{ 0x78f062cb, "msm_bus_scale_client_update_request" },
	{ 0x97f9b378, "mutex_lock" },
	{ 0x4ae9cef5, "wait_for_completion_interruptible" },
	{ 0x7d56dc75, "crypto_enqueue_request" },
	{ 0xc7a2f889, "mem_map" },
	{ 0xbe917b8a, "qce_aead_req" },
	{ 0xd5152710, "sg_next" },
	{ 0x6ff8ad34, "page_address" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xad90232b, "qce_process_sha_req" },
	{ 0xb03f0e17, "qce_ablk_cipher_req" },
	{ 0xffce157e, "crypto_dequeue_request" },
	{ 0xcff08ff0, "kmalloc_caches" },
	{ 0x27e1a049, "printk" },
	{ 0xd11d43bb, "kmem_cache_alloc_trace" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x8949858b, "schedule_work" },
	{ 0x71c90087, "memcmp" },
	{ 0x91dda801, "scatterwalk_map_and_copy" },
	{ 0x7a4497db, "kzfree" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x9d669763, "memcpy" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0xdfabe0ff, "scm_call" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x575c81e1, "qce_close" },
	{ 0x37a0cba, "kfree" },
	{ 0x35d032f8, "crypto_unregister_ahash" },
	{ 0x151e6bc3, "crypto_unregister_alg" },
	{ 0xcf8cc5ee, "msm_bus_scale_unregister_client" },
	{ 0xda7758b0, "dev_get_drvdata" },
	{ 0x96408c78, "platform_driver_unregister" },
	{ 0x762f1d1b, "debugfs_remove_recursive" },
	{ 0x4588bf0f, "__dynamic_pr_debug" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=qce";


MODULE_INFO(srcversion, "2B12B3AD9154F781A49F877");
