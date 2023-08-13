include ./config.mk

.PHONY: libs includes test clean gui

all: clean includes libs gui test

includes:
	make -C $(TSC_CDPA_GUI) includes

libs:
	make -C $(TSC_CDPA_GUI) libs

gui:
	make -C $(TSC_CDPA_GUI) all

test:
	make -C $(TSC_CDPA_GUI) test

clean:
	make -C $(TSC_CDPA_GUI) clean


