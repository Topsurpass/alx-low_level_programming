#include <stdio.h>
/**
 * main - Fetch the highest prime factor
 * Return: 0 ( complete and exit)
 */
int main(void)
{
	unsigned long a = 612852475143;
	unsigned long i = 2;

	while (i < a)
	{
		if (a % i == 0)
		{
			a /= i;
			i = 2;
		}
		else
			i++;
	}
	printf("%lu\n", a);
	return (0);
}
