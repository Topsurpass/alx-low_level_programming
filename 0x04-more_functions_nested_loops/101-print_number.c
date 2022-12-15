#include "main.h"
/**
 * print_number - Print integer numbers with putchar
 * @n: The integer argument
 */
void print_number(int n)
{
	unsigned int tens, i;
	unsigned int ptiveNum = n;
	double j = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			ptiveNum = n * -1;
			_putchar('-');

		}
		while (j <= ptiveNum)
			j *= 10;
		tens = j / 10;

		while (tens >= 1)
		{
			i = ptiveNum / tens;
			_putchar(i + '0');
			ptiveNum = (ptiveNum - (tens * i));
			tens /= 10;
		}
	}
	_putchar('\n');
}
