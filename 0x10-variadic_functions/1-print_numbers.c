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

	if (*separator == '\0')
		return;
	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(v_arr, int), separator);

	printf("%d\n", va_arg(v_arr, int));
	va_end(v_arr);
}

