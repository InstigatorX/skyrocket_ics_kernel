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
	{ 0x40e17305, "input_register_handler" },
	{ 0xcff08ff0, "kmalloc_caches" },
	{ 0x1f9d69a2, "input_open_device" },
	{ 0xb22f763e, "input_register_handle" },
	{ 0xd11d43bb, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xc7a069e4, "input_unregister_handle" },
	{ 0xc413aa6a, "input_close_device" },
	{ 0x27e1a049, "printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x40ee432, "input_unregister_handler" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*k*r*a*m*l*s*f*w*");
