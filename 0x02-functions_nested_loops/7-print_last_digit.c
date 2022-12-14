#include "main.h"
/**
 * print_last_digit - The function prints the last digit
 * of a number
 * @n: The first parameter of type integer
 *
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (i < 0)
		i = i * -1;
	_putchar(i + '0');

	return (i);
}
