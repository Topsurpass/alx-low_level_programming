#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: the binary number
 * Return: unsigned int (base 10)
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int sum = 0;
	int len = 0, i;

	if (b == NULL)
		return (sum);

	while (b[len] != '\0')
		len++;
	len -= 1;

	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (sum);

		if (b[i] == '1')
			sum += (1 * (1 << len));
		i++;
		len--;
	}

	return (sum);
}
