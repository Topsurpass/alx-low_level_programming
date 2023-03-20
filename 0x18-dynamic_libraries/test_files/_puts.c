#include "main.h"
/**
 * _puts - Print strings to standard output
 * @s: The string argument
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);
	_putchar('\n');
}
