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
	{ 0xd897e578, "register_qdisc" },
	{ 0x45e03572, "__qdisc_calculate_pkt_len" },
	{ 0xac6c45b6, "kfree_skb" },
	{ 0x127a84dd, "tc_classify" },
	{ 0x84c6b9db, "pskb_expand_head" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c278308, "qdisc_destroy" },
	{ 0x71b28298, "tcf_destroy_chain" },
	{ 0x8970788a, "noop_qdisc" },
	{ 0xc8c70d6b, "pfifo_qdisc_ops" },
	{ 0xcc7fa952, "local_bh_enable_ip" },
	{ 0x4d50a49c, "qdisc_tree_decrease_qlen" },
	{ 0x8bd94317, "_raw_spin_lock_bh" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x27e1a049, "printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xf429e1e3, "qdisc_create_dflt" },
	{ 0xa9f9de40, "qdisc_reset" },
	{ 0x4f391d0e, "nla_parse" },
	{ 0x1fd6a21f, "skb_trim" },
	{ 0xa31486b8, "nla_put" },
	{ 0x4588bf0f, "__dynamic_pr_debug" },
	{ 0x5a77ed31, "unregister_qdisc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

