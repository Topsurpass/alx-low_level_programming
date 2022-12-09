#include <stdio.h>
#include <ctype.h>
/**
 * main - The entry for all functions and variables
 * Return: always 0 (means success)
 */
int main(void)
{
	for (int x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
