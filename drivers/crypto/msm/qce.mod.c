#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6d1d2d5c, "module_layout" },
	{ 0xcff08ff0, "kmalloc_caches" },
	{ 0x3113a1ff, "clk_enable" },
	{ 0xc44036a, "dma_unmap_sg" },
	{ 0x23ef7eac, "dma_map_sg" },
	{ 0xa196c0af, "clk_disable" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xd5152710, "sg_next" },
	{ 0x4a37af33, "___dma_single_cpu_to_dev" },
	{ 0x5f754e5a, "memset" },
	{ 0x31bf6326, "dev_err" },
	{ 0xdb3877d, "___dma_single_dev_to_cpu" },
	{ 0xe4d14011, "msm_dmov_enqueue_cmd" },
	{ 0xa63c7daa, "dma_free_coherent" },
	{ 0xe96d436e, "platform_get_resource" },
	{ 0x2dfc5008, "dma_alloc_coherent" },
	{ 0xd1f0621f, "_dev_info" },
	{ 0xd11d43bb, "kmem_cache_alloc_trace" },
	{ 0xdf9c0d15, "clk_get" },
	{ 0x89f90a41, "platform_get_resource_byname" },
	{ 0x37a0cba, "kfree" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8ff97ceb, "__msm_ioremap" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DF855483E8E9FB41EC929F8");
