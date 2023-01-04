#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - Print string in reverse order
 * @s: the string
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	i++;
	_print_rev_recursion(s + i);
	_putchar(*s);
}
