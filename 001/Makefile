# SPDX-License-Identifier: GPL-2.0
#
# Makefile for the kernel character device drivers.
#

KERN_DIR := /lib/modules/$(shell uname -r)/build

obj-m := foo.o

all:
	$(MAKE) -C $(KERN_DIR) M=`pwd` modules

clean:
	$(MAKE) -C $(KERN_DIR) M=`pwd` modules clean
