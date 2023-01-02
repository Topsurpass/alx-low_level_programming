#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a: the 2-dimendional array
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i < 8)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
		i++;
	}
}
