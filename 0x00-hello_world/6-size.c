#include <stdio.h>
/**
 * main - The entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %lu bytes(s)\n", sizeof(char));
	printf("Size of a int: %lu bytes(s)\n", sizeof(int));
	printf("Size of a long: %lu bytes(s)\n", sizeof(long));
	printf("Size of a long long: %lu bytes(s)\n", sizeof(long long));
	printf("Size of a float: %lu bytes(s)\n", sizeof(float));
	return (0);
}
