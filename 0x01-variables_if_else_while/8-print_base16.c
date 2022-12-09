#include <stdio.h>
/**
 * main - This is the entry point to everyother functions and variable
 * Return: This is zero, it puts and end to the program.
 */

int main(void)
{
	int i = '0';

	int j = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	};

	while (j <= 'f')
	{
		putchar(j);
		j++;
	};

	putchar('\n');
	return (0);
}

