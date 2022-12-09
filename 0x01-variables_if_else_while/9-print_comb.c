#include <stdio.h>

/**
 * main - The entry point
 * Return: Remains 0, it stops the program.
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);

		if (i < '9')
		{
			putchar(',');
			putchar(' ');
		} else if (i == '9')
		{
			putchar('$');
		}

		i++;
	};

	return (0);
}
