#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: the binary number
 *
 * Return: the binary to decimal or base 10 conversion
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, i, length;

	sum = 0, length = 0;

	if (b == NULL)
		return (0);

	while (b[length] != '\0')
		length++;
	length -= 1;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		sum += (b[i] - '0') * (1 << length);
		length -= 1;
	}
	return (sum);
}
