#include "main.h"
/**
 * print_number - print an integer
 * @n: the intger
 */
void print_number(int n)
{
	unsigned int t, d, p;

	p = n;
	double point = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			p = n * -1;
			_putchar('-');
		}
		while (point <= p)
			point *= 10;
		t = point / 10;

		while (t >= 1)
		{
			d = p / t;
			_putchar(d + '0');
			p = (p - (t * d));
			t /= 10;
		}
	}
}
