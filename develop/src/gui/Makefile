include ../config.mk

.PHONY: libs includes test clean gui

all: clean includes libs gui test

includes:
	make -C $(TSC_CDPA_INCL) includes
	make -C $(TSC_CDPA_LIBSYMBIOT) includes
	$(TSC_SBP_CP) ./$(TSC_PRJG_FNAME).h $(TSC_CDPA_INCL)/$(TSC_PRJG_FNAME)/$(TSC_CDN_GUI)
	$(TSC_SBP_CP) ../config.h $(TSC_CDPA_INCL)/$(TSC_PRJG_FNAME)

libs:
	make -C $(TSC_CDPA_LIB) libs
	make -C $(TSC_CDPA_LIBSYMBIOT) libs

gui: ../config.mk includes Makefile $(TSC_PRJG_FNAME).c $(TSC_PRJG_FNAME).h
	$(TSC_SBP_CC) $(CFLAGS_GLIB) $(CFLAGS_GTK) -I. -I $(TSC_CDPA_INCL) -D _GNU_SOURCE -L ../lib $(TSC_PRJG_FNAME).c -o $(TSC_PRJG_FNAME) -rdynamic  $(LIBS_GLIB) $(LIBS_GTK)

test:
	./$(TSC_PRJG_FNAME)
	make -C $(TSC_CDPA_LIBSYMBIOT) test


clean:
	$(TSC_SBP_RM) ./$(TSC_PRJG_FNAME)
	make -C $(TSC_CDPA_LIBSYMBIOT) clean


