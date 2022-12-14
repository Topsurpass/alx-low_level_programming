#include <stdio.h>
/**
 * main - Entry to our program
 * Return: 0 (exit out program)
 */

int main(void)
{
	int sum_even = 0;
	int i;
	int j;

	int add = 1;

	i = 1;
	j = 1;

	while (j < 4000000)
	{
		add = i + j;
		i = j;
		j = add;
		if ((add <= 4000000) && (add % 2 == 0))
			sum_even += add;
	}
	printf("%d\n", sum_even);
	return (0);
}
