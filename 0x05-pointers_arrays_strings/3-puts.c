#include "main.h"
#include <string.h>
/**
 * _puts - Print strings to standard output
 * @str: The string argument
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
