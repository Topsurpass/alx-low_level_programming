#include <stdio.h>
/**
 * main - This is the entry point
 * Return : always 0 (success)
 */
int main(void)
{
	int i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
