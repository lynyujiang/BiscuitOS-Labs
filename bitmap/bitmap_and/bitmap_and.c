/*
 * BiscuitOS Kernel BiscuitOS Code
 *
 * (C) 2019.06.10 <buddy.zhang@aliyun.com>
 * (C) 2020.10.04 lynyujiang <lynyujiang@aliyun.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#include <linux/module.h> /* Needed by all modules */
#include <linux/kernel.h> /* Needed for KERN_INFO */
#include <linux/init.h>   /* Needed for the macros */

/* bitmap interface */
#include <linux/bitmap.h>

static __init int BiscuitOS_bitmap_init(void)
{
    unsigned long bitmap0 = 0x2345;
    unsigned long bitmap1 = 0xff;
    unsigned long bitmap;

    /* AND operation */
    bitmap_and(&bitmap, &bitmap0, &bitmap1, 12);
    printk("%#lx AND %#lx = %#lx\n", bitmap0, bitmap1, bitmap);

    return 0;
}
device_initcall(BiscuitOS_bitmap_init);

MODULE_LICENSE("GPL");
MODULE_VERSION("0.1");

