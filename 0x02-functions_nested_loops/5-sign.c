#include "main.h"
/**
 * print_sign - check if number is positive or
 * negative a print its corresponding sign (+ or -)
 * @n: the parameter for the function with type int
 *
 * Return: 1 (positive) 0 (zero) -1 (negative)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar('\n');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar('\n');
		return (-1);
	}
	_putchar('\n');
	return (0);
}
