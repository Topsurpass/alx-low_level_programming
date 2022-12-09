#include <stdio.h>
/**
 * main - The entry point of all other functions and variables
 * Return: Always 0 (means Success)
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
