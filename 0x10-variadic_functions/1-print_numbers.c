#include "variadic_functions.h"
/**
 * print_numbers - print numbers followed by a new
 * line
 * @separator: string to be printed between numbers
 * @n: numbers of integers passed to the function
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list v_arr;
	unsigned int i;

	if (n == 0)
		return;

	va_start(v_arr, n);

	if (separator == NULL)
		return;
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(v_arr, int));
		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	va_end(v_arr);
	printf("\n");
}

