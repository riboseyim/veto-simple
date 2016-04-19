/*
 ============================================================================
 Name        : veto_mq_util.c
 Author      : yanrui
 Version     :
 Copyright   : 2015-2050
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>
//###########################
#include <zmq.h>
#include <zmq_utils.h>
//###########################
//#include "veto_mq_utils.h"

void print_zmq_version (void)
{
   int major,minor,patch;
   zmq_version(&major,&minor,&patch);
   printf("Current ZMQ Version is %d.%d.%d \n",&major,&minor,&patch);
}
