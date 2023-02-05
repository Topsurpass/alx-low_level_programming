#include "main.h"
/**
 * _strlen - get the length of string
 * @str: the string
 *
 * Return: string length
 */
unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	if (str[i] == '\0')
		return (0);
	i++;
	return (i + _strlen(str + i));
}
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: the binary number
 *
 * Return: the binary to decimal or base 10 conversion
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, i, length;

	sum = 0, length = _strlen(b) - 1;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		sum += (b[i] - '0') * (1 << length);
		length -= 1;
	}
	return (sum);
}
