#
#  Makefile


SHELL   = /bin/sh
prefix  = /usr/local
exec_prefix=${prefix}
srcdir  = .
sbindir = ${exec_prefix}/sbin
libdir  = ${exec_prefix}/lib
sysconfdir = ${prefix}/etc
SETUPDIR = /slview/nms
TARGETDIR = $(SETUPDIR)/bin
SRCDIR = .
CC      = gcc
CFLAGS  = -O2 -Wall
CPPFLAGS= -g
DEFS    = 
LDFLAGS = 
LIBS    = #-lnsl -lsocket -lpthread -lrt -lm
INCLUDES=

CURR_DIR = $(shell pwd)
OBJPATH =  $(CURR_DIR)/obj
OBJS    = main.o veto_utils.o chg_db_pass.o
TARGET  = veto

.c.o:
	$(CC) -I. $(CPPFLAGS) $(DEFS) $(CFLAGS) -c $<

all: $(TARGET)


$(TARGET): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) $(LIBS) $(LDFLAGS) -o $@
	-cp $(SRCDIR)/$(TARGET)  $(TARGETDIR)/$(TARGET) 
	-chmod ugo+s $(TARGETDIR)/$(TARGET) 
	-chmod ugo+s $(SRCDIR)/$(TARGET) 

clean:
	-rm -f *.o *~  *.core core $(TARGET) 
	-rm -f $(TARGETDIR)/$(TARGET)

main.o: main.c
	$(CC) -g -c -o main.o main.c

utils.o: utils.c
	$(CC) -g -c -o veto_utils.o veto_utils.c
	
chg_db_pass.o: chg_db_pass.c
	$(CC) -g -c -o chg_db_pass.o chg_db_pass.c
	
	
	
	
	
	