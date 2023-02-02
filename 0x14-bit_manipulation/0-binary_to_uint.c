#include "main.h"

/**
 * _strlen - get the length of string
 * @str: the string
 *
 * Return: the length of the string
 */

int _strlen(const char *str)
{
	int i = 0;

	if (str[i] == '\0')
		return (0);
	i++;
	return (i + _strlen(str + i));
}

/**
 * binary_to_uint - convert binary number to an
 * unsigned int
 * @b: the binary number
 *
 * Return: the binary number in base 10 (unsigned int)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, pow;
	int length;

	sum = 0, pow = 1, length = _strlen(b);

	if (b == NULL)
		return (0);

	length--;

	while (length >= 0)
	{
		if (b[length] != '1' && b[length] != '0')
			return (0);
		if (b[length] == '1')
			sum += pow;
		pow *= 2;
		length--;
	}
	return (sum);
}

