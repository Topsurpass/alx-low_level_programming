#include "main.h"
#include <string.h>
/**
 * _puts - Print strings to standard output
 * @str: The string argument
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
