/*
 ============================================================================
 Name        : veto_mq_server.c
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

#include "veto_mq_utils.h"

int main (void)
{
	//
	print_zmq_version();
    //  Socket to talk to clients
    void *context = zmq_ctx_new ();
    void *responder = zmq_socket (context, ZMQ_REP);
    int rc = zmq_bind (responder, "tcp://*:5555");
    assert (rc == 0);

    while (1) {
        char buffer [10];
        zmq_recv (responder, buffer, 10, 0);

        printf ("Received Hello \n");
        sleep (1);          //  Do some 'work'
        zmq_send (responder, "World", 5, 0);
    }
    return 0;
}
