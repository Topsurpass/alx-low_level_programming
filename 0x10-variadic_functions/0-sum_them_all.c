#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameters given
 * @n: number of parameters to supply
 *
 * Return: the sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list v_arr;
	unsigned int i;

	int sum = 0;

	if (n == 0)
		return (0);

	va_start(v_arr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(v_arr, int);
	}
	va_end(v_arr);

	return (sum);
}

