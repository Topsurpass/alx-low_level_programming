#include <stdio.h>
/**
 * main - This is the entry point
 * Return: This is always 0 (success)
 */

int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
