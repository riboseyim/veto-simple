/*
 ============================================================================
 Name        : CVetoSystem.c
 Author      : yanrui
 Version     : 0.1
 Copyright   : 2015-2050
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "veto_utils.h"

int main(void) {
	vetolog();

	printf("!!! Hello World yanrui !!! \n\n"
			"Please select action: \n"
			"-o:chg_db_pass \n"
			"-h:help \n");



	vetolog();
	vetolog();
	return EXIT_SUCCESS;
}
