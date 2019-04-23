/*
 * Copyright (C) 2019 Andrew <mrju.email@gail.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

#define STR(x) _STR(x)
#define _STR(x) #x

#define MAJOR_VERSION 0
#define MINOR_VERSION 0
#define PATCH_VERSION 0

#define VERSION STR(MAJOR_VERSION.MINOR_VERSION.PATCH_VERSION)

static int __init foo_init(void)
{
	printk("%s(): %d\n", __func__, __LINE__);
	return 0;
}

static void __exit foo_exit(void)
{
	printk("%s(): %d\n", __func__, __LINE__);
}

module_init(foo_init);
module_exit(foo_exit);

MODULE_AUTHOR("andrew, mrju.email@gmail.com");
MODULE_DESCRIPTION("Linux is not Unix");
MODULE_VERSION(VERSION);
MODULE_LICENSE("GPL");
MODULE_ALIAS("foo-driver");
