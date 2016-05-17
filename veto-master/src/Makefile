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
OBJS    = main.o veto_utils.o chg_db_pass.o
TARGET  = Veto

.c.o:
	$(CC) -I. $(CPPFLAGS) $(DEFS) $(CFLAGS) -c $<

all: $(TARGET)


$(TARGET): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) $(LIBS) $(LDFLAGS) -o $@
	-cp $(SRCDIR)/Veto $(TARGETDIR)/Veto
	-chmod ugo+s $(TARGETDIR)/Veto
	-chmod ugo+s $(SRCDIR)/Veto

clean:
	-rm -f *.o *~  *.core core Veto
	-rm -f $(TARGETDIR)/Veto

main.o: main.c
	$(CC) -g -c -o main.o main.c

utils.o: utils.c
	$(CC) -g -c -o veto_utils.o veto_utils.c
	
chg_db_pass.o: chg_db_pass.c
	$(CC) -g -c -o chg_db_pass.o chg_db_pass.c
	
	