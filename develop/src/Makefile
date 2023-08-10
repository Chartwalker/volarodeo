include ./config.mk

.PHONY: libs includes test


TSC_PRJL_RPT=$(TSC_PRJG_FNAME)-rpt

all: libs includes $(TSC_PRJL_RPT) test

includes:
	$(TSC_SBP_CP) ./config.h $(TSC_CDPA_INCL)/$(TSC_PRJG_FNAME)/config.h 
	$(TSC_SBP_CP) ./$(TSC_PRJL_RPT).h $(TSC_CDPA_INCL)/$(TSC_PRJG_FNAME)/$(TSC_PRJL_RPT).h 
	make -C ../include includes

libs:
	make -C ../lib libs

$(TSC_PRJL_RPT): libs includes $(TSC_PRJL_RPT).h $(TSC_PRJL_RPT).c $(TSC_PRJL_RPT).xml
	$(TSC_SBP_CC) $(CFLAGS_GLIB) -I. -I $(TSC_CDPA_INCL) -D _GNU_SOURCE -L ../lib $(TSC_PRJL_RPT).c -o $(TSC_PRJL_RPT) -rdynamic  $(CFLAGS_GLIB) $(CFLAGS_GTK)

test:
	./$(TSC_PRJL_RPT)

clean:
	rm -f $(TSC_PRJL_RPT)
