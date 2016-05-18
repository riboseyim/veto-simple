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
LIBS    = -lzmq  -L/usr/local/lib
INCLUDES= -I/usr/local/include 

CURR_DIR = $(shell pwd)
OBJPATH =  $(CURR_DIR)/obj
OBJS    =  veto_mq_server.o veto_mq_utils.o
TARGET  =  veto_mq_server

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

veto_mq_server.o: veto_mq_server.c
	$(CC) -g -c -o veto_mq_server.o veto_mq_server.c $(CPPFLAGS) $(INCLUDES)

veto_mq_utils.o: veto_mq_utils.c
	$(CC) -g -c -o veto_mq_utils.o veto_mq_utils.c $(INCLUDES)
	
	
	
	
	
	
	