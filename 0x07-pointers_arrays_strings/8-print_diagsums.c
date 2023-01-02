#include <stdio.h>

/**
 * print_diagsums - prints the sum of the 2
 * diagonals of a square matrix of integers.
 * @a:the array
 * @size: the size of the array
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;

	int i, j;

	for (i = 0; i < size; i++)
	{
		j = i * size + i;
		sum1 = sum1 + *(a + j);
	}
	for (i = 1; i <= size; i++)
	{
		j = i * size - i;
		sum2 = sum2 + *(a + j);
	}
	printf("%d, %d\n", sum1, sum2);
}
