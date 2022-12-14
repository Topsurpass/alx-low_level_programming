#include <stdio.h>
/**
 * main - Entry to our program that Prints out
 * first 50 fibonacci numbers
 * Return: 0 (exit the program)
 */

int main(void)
{
	int i;
	int j = 50;

	int long a = 1;
	int long b = 2;

	for (i = 1; i <= (j / 2); i++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	if (j % 2 == 1)
		printf("%li", a);

	printf("\n");

	return (0);
}
