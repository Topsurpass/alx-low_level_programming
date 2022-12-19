#include "main.h"
#include <stdio.h>
/**
 * print_array - print a number of size of an array
 * @a: The array
 * @n: the size argument
 */

void print_array(int *a, int n)
{
	int i;

	while (i < n)
	{
		if (i <= (n - 2))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
