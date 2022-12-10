#include <stdio.h>

/**
 *  *main - Entry point for all functions and other variables
 *   *Return: Put an end to the program
 */

int main(void)
{
	int k;
	int j;
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = (i + 1); j <= '9'; j++)
		{
			for (k = (j + 1); k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != '7' || j != '8' || k != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);

}
