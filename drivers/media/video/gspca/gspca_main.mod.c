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
	{ 0xf9a482f9, "msleep" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xeee2d147, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xa57afc74, "ktime_get" },
	{ 0x2d6e5738, "usb_kill_urb" },
	{ 0x329da330, "__video_register_device" },
	{ 0x73e9be07, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xf47f0f63, "mutex_lock_interruptible" },
	{ 0xe830af4e, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x4141f80, "__tracepoint_module_get" },
	{ 0x972e856a, "video_unregister_device" },
	{ 0xe75fc552, "usb_set_interface" },
	{ 0x328a05f1, "strncpy" },
	{ 0x97f9b378, "mutex_lock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xd213b1, "usb_free_coherent" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe85fa2f2, "vm_insert_page" },
	{ 0x2033cbbb, "module_put" },
	{ 0x3043e8ab, "usb_submit_urb" },
	{ 0xb410b93b, "video_devdata" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xa4fafe18, "input_register_device" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1788089a, "usb_clear_halt" },
	{ 0xdab55be2, "input_free_device" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xd11d43bb, "kmem_cache_alloc_trace" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x72542c85, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x802c18b6, "input_unregister_device" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0xf83178bd, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xda4b15d1, "usb_ifnum_to_if" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x6b14878f, "vmalloc_to_page" },
	{ 0x627b1c4b, "usb_alloc_coherent" },
	{ 0xda7758b0, "dev_get_drvdata" },
	{ 0x90062960, "usb_free_urb" },
	{ 0x41c92a98, "video_ioctl2" },
	{ 0x524245b3, "usb_alloc_urb" },
	{ 0xdf4c8767, "ns_to_timeval" },
	{ 0xb42b9ec9, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

