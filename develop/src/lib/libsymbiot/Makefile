include ../../config.mk

.PHONY: config clean includes libs install test doc

all: clean includes libs install doc

$(TSC_CFN_LIBSYMBIOT).a: $(TSC_CFN_LIBSYMBIOT).h $(TSC_CFN_LIBSYMBIOT).c tb_$(TSC_CFN_LIBSYMBIOT).c
	$(TSC_SBP_CC) -I. -I $(TSC_CDPA_INCL) $(CFLAGS_GLIB) $(CFLAGS_GTK)  -c $(TSC_CFN_LIBSYMBIOT).c
	$(TSC_SBP_AR) $(TSC_CFN_LIBSYMBIOT).a $(TSC_CFN_LIBSYMBIOT).o

tb_$(TSC_CFN_LIBSYMBIOT): $(TSC_CFN_LIBSYMBIOT).a tb_$(TSC_CFN_LIBSYMBIOT).c
	$(TSC_SBP_CC) $(CFLAGS_GLIB) $(CFLAGS_GTK) -I. -I $(TSC_CDPA_INCL) -L $(TSC_CDPA_LIB)  tb_$(TSC_CFN_LIBSYMBIOT).c -o tb_$(TSC_CFN_LIBSYMBIOT) $(LIBS_GLIB) $(LIBS_GTK)

install: includes libs test

includes:
	$(TSC_SBP_MKDIR) -p $(TSC_CDPA_INCL)/$(TSC_CDN_LIBSYMBIOT) 
	@if [ -f ./$(TSC_CFN_LIBSYMBIOT).h ]; then $(TSC_SBP_CP) ./$(TSC_CFN_LIBSYMBIOT).h $(TSC_CDPA_INCL)/$(TSC_CDN_LIBSYMBIOT)/$(TSC_CFN_LIBSYMBIOT).h; fi
	@if [ -f ./bitops.h ]; then $(TSC_SBP_CP) ./bitops.h $(TSC_CDPA_INCL)/$(TSC_CDN_LIBSYMBIOT)/bitops.h; fi

libs: includes $(TSC_CFN_LIBSYMBIOT).a
	$(TSC_SBP_MKDIR) -p $(TSC_CDPA_LIB)
	$(TSC_SBP_CP) $(TSC_CFN_LIBSYMBIOT).a $(TSC_CDPA_LIB)/$(TSC_CFN_LIBSYMBIOT).a

doc:
	$(TSC_SBP_DOT) -Tpdf < tb_$(TSC_CFN_LIBSYMBIOT).dot  > tb_$(TSC_CFN_LIBSYMBIOT)_dot.pdf

clean:
	@if [ -f ./$(TSC_CFN_LIBSYMBIOT).a ]; then $(TSC_SBP_RM) ./$(TSC_CFN_LIBSYMBIOT).a; fi 
	@if [ -f ./$(TSC_CFN_LIBSYMBIOT).o ]; then $(TSC_SBP_RM) ./$(TSC_CFN_LIBSYMBIOT).o; fi 
	@if [ -f ./$(TSC_CFN_LIBSYMBIOT) ]; then $(TSC_SBP_RM) ./$(TSC_CFN_LIBSYMBIOT).o; fi 
	@if [ -f ./tb_$(TSC_CFN_LIBSYMBIOT) ]; then $(TSC_SBP_RM) ./tb_$(TSC_CFN_LIBSYMBIOT); fi 
	@if [ -f ./tb_$(TSC_CFN_LIBSYMBIOT)_log.txt ]; then $(TSC_SBP_RM) ./tb_$(TSC_CFN_LIBSYMBIOT)_log.txt; fi 
	@if [ -f ./tb_$(TSC_CFN_LIBSYMBIOT)_dbg.txt ]; then $(TSC_SBP_RM) ./tb_$(TSC_CFN_LIBSYMBIOT)_dbg.txt; fi 
	@if [ -f ./tb_$(TSC_CFN_LIBSYMBIOT)_dot.pdf ]; then $(TSC_SBP_RM) ./tb_$(TSC_CFN_LIBSYMBIOT)_dot.pdf; fi 
	@if [ -f ./tb_$(TSC_CFN_LIBSYMBIOT).html ]; then $(TSC_SBP_RM) ./tb_$(TSC_CFN_LIBSYMBIOT).html; fi 
	@if [ -f ./tb_$(TSC_CFN_LIBSYMBIOT).dot ]; then $(TSC_SBP_RM) ./tb_$(TSC_CFN_LIBSYMBIOT).dot; fi 
	@if [ -f ./tb_$(TSC_CFN_LIBSYMBIOT).json ]; then $(TSC_SBP_RM) ./tb_$(TSC_CFN_LIBSYMBIOT).json; fi 
	@if [ -f $(TSC_CDPA_INCL)/$(TSC_CFN_LIBSYMBIOT).a ]; then $(TSC_SBP_RM) $(TSC_CDPA_LIB)/$(TSC_CFN_LIBSYMBIOT).a; fi 
	@if [ -f $(TSC_CDPA_INCL)/$(TSC_CDN_LIBSYMBIOT)/$(TSC_CFN_LIBSYMBIOT).h ]; then $(TSC_SBP_RM) $(TSC_CDPA_INCL)/$(TSC_CDN_LIBSYMBIOT)/$(TSC_CFN_LIBSYMBIOT).h; fi
	@if [ -f $(TSC_CDPA_INCL)/$(TSC_CDN_LIBSYMBIOT)/bitops.h ]; then $(TSC_SBP_RM) $(TSC_CDPA_INCL)/$(TSC_CDN_LIBSYMBIOT)/bitops.h; fi


test: tb_$(TSC_CFN_LIBSYMBIOT)
	./tb_$(TSC_CFN_LIBSYMBIOT)
