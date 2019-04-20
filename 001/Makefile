# Author: andrew, mrju.email@gmail.com
# Description: Makefile for building kernel module

KERNEL := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

obj-m := foo.o

all:
	$(MAKE) -C $(KERNEL) M=$(PWD) modules

clean:
	-rm -f *.o *.ko *.mod.c Module.symvers modules.order
