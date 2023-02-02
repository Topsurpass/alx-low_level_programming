#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: the binary number
 *
 * Return: the binary to decimal or base 10 conversion
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		sum = 2 * sum + (b[i] - '0');
	}

	return (sum);
}
