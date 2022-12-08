#include <stdio.h>
/**
 * main - The entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %zu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of a int: %zu bytes(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %zu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %zu bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %zu bytes(s)\n", (unsigned long)sizeof(e));
	return (0);
}
