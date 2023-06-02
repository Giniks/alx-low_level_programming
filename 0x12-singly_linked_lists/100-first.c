#include "lists.h"
#include <stdio.h>

/**
 * pre_main - prints the desired message using printf before
 * the msin function is executed
 */
void __attribute__((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
