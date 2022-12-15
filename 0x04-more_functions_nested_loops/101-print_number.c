#include "main.h"
/**
 * print_number - Print integer numbers with putchar
 * @n: The integer argument
 */
void print_number(int n)
{
	unsigned int i = 0;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	else
	{
		i = n;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
