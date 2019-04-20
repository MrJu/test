#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>
#include "utils.h"

#define MAJOR_VERSION 0
#define MINOR_VERSION 0
#define PATCH_VERSION 0

#define VERSION STR(MAJOR_VERSION.MINOR_VERSION.PATCH_VERSION)

static int __init foo_init(void)
{
	pr_notice("%s(): enter\n", __func__);
	return 0;
}

static void __exit foo_exit(void)
{
	pr_notice("%s(): enter\n", __func__);
}

module_init(foo_init);
module_exit(foo_exit);

MODULE_AUTHOR("andrew, mrju.email@gmail.com");
MODULE_DESCRIPTION("Linux is not Unix");
MODULE_VERSION(VERSION);
MODULE_LICENSE("GPL");
MODULE_ALIAS("foo-driver");
