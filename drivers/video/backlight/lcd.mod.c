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
	{ 0x5934392b, "fb_register_client" },
	{ 0xeee2d147, "dev_set_drvdata" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x4588bf0f, "__dynamic_pr_debug" },
	{ 0x73e9be07, "mutex_unlock" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xc559e47d, "device_register" },
	{ 0x11089ac7, "_ctype" },
	{ 0xe830af4e, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x97f9b378, "mutex_lock" },
	{ 0xd11d43bb, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1b20177, "class_destroy" },
	{ 0xcc36f32e, "fb_unregister_client" },
	{ 0xec9addc8, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbf3b1321, "dev_set_name" },
	{ 0xc9c4c1b3, "__class_create" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

