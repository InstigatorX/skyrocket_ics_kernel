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
	{ 0x444a3a1e, "register_tcf_proto_ops" },
	{ 0x35ae1d48, "tcf_action_exec" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xf21910ec, "__skb_get_rxhash" },
	{ 0x3c0ce7a7, "__tcf_em_tree_match" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x45058d15, "__pskb_pull_tail" },
	{ 0xacd8bb2d, "del_timer" },
	{ 0x72b0551e, "tcf_exts_change" },
	{ 0x28d13f63, "init_timer_deferrable_key" },
	{ 0x1b519ff5, "tcf_em_tree_validate" },
	{ 0xf1d81394, "tcf_exts_validate" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x4f391d0e, "nla_parse" },
	{ 0xcff08ff0, "kmalloc_caches" },
	{ 0xd11d43bb, "kmem_cache_alloc_trace" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6ed4557e, "mod_timer" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xcc7fa952, "local_bh_enable_ip" },
	{ 0x8bd94317, "_raw_spin_lock_bh" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x27e1a049, "printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x37a0cba, "kfree" },
	{ 0x9b48c6d0, "tcf_em_tree_destroy" },
	{ 0x22068c39, "tcf_exts_destroy" },
	{ 0xf7b574c2, "del_timer_sync" },
	{ 0x1fd6a21f, "skb_trim" },
	{ 0xbaf49c4a, "tcf_exts_dump_stats" },
	{ 0x83fff5af, "tcf_em_tree_dump" },
	{ 0x9089c74a, "tcf_exts_dump" },
	{ 0xa31486b8, "nla_put" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x327db909, "unregister_tcf_proto_ops" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

