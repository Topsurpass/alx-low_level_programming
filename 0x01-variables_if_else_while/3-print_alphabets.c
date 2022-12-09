#include <stdio.h>
#include <ctype.h>
/**
 * main - The entry for all functions and variables
 * Return: always 0 (means success)
 */
int main(void)
{	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
