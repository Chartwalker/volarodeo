include ../config.mk

.PHONY: libs includes test clean

all: clean includes libs $(TSC_PRJG_FNAME) test

includes:
	make -C $(TSC_CDPA_INCL) includes
	$(TSC_SBP_CP) ./$(TSC_PRJG_FNAME).h $(TSC_CDPA_INCL)/$(TSC_PRJG_FNAME)/$(TSC_CDN_GUI)

libs:
	make -C $(TSC_CDPA_LIB) libs

$(TSC_PRJG_FNAME): Makefile $(TSC_PRJG_FNAME).c $(TSC_PRJG_FNAME).h
	$(TSC_SBN_CC) $(TSC_SBP_CC) $(CFLAGS_GLIB) -I. -I $(TSC_CDPA_INCL) -D _GNU_SOURCE -L ../lib $(TSC_PRJG_FNAME).c -o $(TSC_PRJG_FNAME) -rdynamic  $(CFLAGS_GLIB) $(CFLAGS_GTK)


test:

clean:


