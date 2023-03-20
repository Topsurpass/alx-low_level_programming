#include "main.h"
/**
 * _atoi - Change the string to an integer
 * @s: The string argument
 * Return: The string - integer conversion
 */

int _atoi(char *s)
{
	int i;
	unsigned int j;

	i = 1;
	j = 0;

	do {
		if (*s == '-')
			i *= -1;
		else if (*s >= '0' && *s <= '9')
			j = j * 10 + (*s - '0');
		else if (j > 0)
			break;
	} while (*s++);
	return (j * i);
}
