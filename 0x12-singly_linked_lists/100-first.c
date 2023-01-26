#include "lists.h"

/**
 * printThis_before_main - prior to main function, executes this function
 * Note: made possible by prior declaration of "__attribute__ ((constructor))"
 */

void __attribute__ ((constructor)) printThis_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
