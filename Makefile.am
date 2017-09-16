ACLOCAL_AMFLAGS=-I m4
EURY_VERSION=@EURY_VERSION@

lib_LTLIBRARIES = libeurydice.la
libeurydice_la_LDFLAGS = \
   -release $(EURY_VERSION) -lm
libeurydice_la_CFLAGS = \
   -I$(top_srcdir)/include -Wall -DEURY_VERSION=\"$(EURY_VERSION)\"
libeurydice_la_SOURCES = \
   src/eurydice/eurydice.c \
   src/eurydice/eury_config.c

otherincludedir = \
   $(includedir)/eurydice
otherinclude_HEADERS = \
   include/eurydice/defs.h \
   include/eurydice/eury_config.h \
   include/eurydice/eurydice.h

bin_PROGRAMS = eurydemo
eurydemo_SOURCES = \
   src/eurydemo/main.c
eurydemo_CFLAGS  = -I$(top_srcdir)/include -Wall
eurydemo_LDFLAGS = -L../lib -leurydice
