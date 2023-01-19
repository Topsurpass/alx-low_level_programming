#include "variadic_functions.h"

/**
 * print_strings - print string followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str_arr;
	char *str;

	va_start(str_arr, n);

	for (i = 1; i <= n; i++)
	{
		str = va_arg(str_arr, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str_arr);
}
