#include "main.h"
/**
 * times_table - Print 9 multiplication table
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = (i * j);

			if (k == 0)
			{
				_putchar('0' + j);
			}
			else if (k <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + k);
			}
			else if (k > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (k / 10));
				_putchar('0' + (k % 10));
			}
		}
		_putchar('\n');
	}
}
