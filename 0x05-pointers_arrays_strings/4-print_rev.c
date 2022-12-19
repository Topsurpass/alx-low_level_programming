#include "main.h"
#include <string.h>
/**
 * print_rev - Reverse a string and print
 * @s: The string argument
 */
void print_rev(char *s)
{
	int i;
	int strLength = strlen(s);

	for (i = strLength; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
