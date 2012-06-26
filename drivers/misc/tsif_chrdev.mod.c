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
	{ 0x72542c85, "__wake_up" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x4b62b81e, "tsif_reclaim_packets" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xf83178bd, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0x5f754e5a, "memset" },
	{ 0x31bf6326, "dev_err" },
	{ 0xc94d8bd0, "tsif_get_state" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x884a5f6a, "nonseekable_open" },
	{ 0xe2ba43b2, "tsif_start" },
	{ 0x29596673, "tsif_stop" },
	{ 0x822e2666, "tsif_get_info" },
	{ 0x146e2c1d, "tsif_attach" },
	{ 0x27e32fc5, "device_create" },
	{ 0x7b50080a, "cdev_add" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0xc1bc8d30, "cdev_init" },
	{ 0x8c9700fb, "tsif_get_active" },
	{ 0xc9c4c1b3, "__class_create" },
	{ 0x27e1a049, "printk" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0xc1b20177, "class_destroy" },
	{ 0x7262eeda, "cdev_del" },
	{ 0x8f84631c, "device_destroy" },
	{ 0x9d66b33b, "tsif_detach" },
	{ 0xd1f0621f, "_dev_info" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=msm_tsif";

