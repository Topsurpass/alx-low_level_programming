#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a: the 2-dimendional array
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j, k;

	while (i < 8)
	{
		if (i == 0 || i == 1 || i == 6 || i == 7)
		{
			for (j = 0; j < 8; j++)
			{
				_putchar(a[i][j]);
			}
		}
		else if (i >= 2 && i <= 5)
		{
			for (k = 0; k < 8; k++)
				_putchar(' ');
		}
		_putchar('\n');
		i++;
	}
}
