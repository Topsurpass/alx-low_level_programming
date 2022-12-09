#include <stdio.h>
/**
 * main - The entry point for other functions and variables
 * Return: always 0 (success) and ends program
 */
int main(void)
{
	for (int x = 'a'; x < 'z'; x++)
	{
		putchar(x);
		putchar('\n');
	}

	return (0);
}
