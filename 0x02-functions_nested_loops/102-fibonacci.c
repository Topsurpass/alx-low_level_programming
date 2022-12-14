#include <stdio.h>
/**
 * main - Entry to our program that Prints out
 * first 50 fibonacci numbers
 * Return: 0 (exit the program)
 */

int main(void)
{
	int i;

	long int a = 0, b = 1, c;

	for (i = 1; i <= 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);

		if (i <= 49)
			printf(", ");
	}
	printf("\n");

	return (0);
}
