ACLOCAL_AMFLAGS=-I m4
EURY_VERSION=@EURY_VERSION@
EURY_BUILD=@EURY_BUILD@

lib_LTLIBRARIES = libeurydice.la
libeurydice_la_LDFLAGS = \
   -release $(EURY_VERSION) -lm
libeurydice_la_CFLAGS = \
   -I$(top_srcdir)/include -Wall \
   -DEURY_VERSION=\"$(EURY_VERSION)\" \
   -DEURY_BUILD=$(EURY_BUILD)
libeurydice_la_SOURCES = \
   src/eurydice/system/eury_config.c \
   src/eurydice/system/init.c

otherincludedir = $(includedir)/eurydice
otherinclude_HEADERS = \
   include/eurydice/defs.h \
   include/eurydice/eurydice.h \
   include/eurydice/system/eury_config.h \
   include/eurydice/system/init.h

bin_PROGRAMS = eurydemo
eurydemo_SOURCES = \
   src/demo/main.c
eurydemo_CFLAGS  = -I$(top_srcdir)/include -Wall
eurydemo_LDFLAGS = -L../lib -leurydice
