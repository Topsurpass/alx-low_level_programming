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

	for (i = 0; i < n; i++)
	{
		str = va_arg(str_arr, char *);
		if (str == NULL)
			printf("(nill)");
		else
			printf("%s", str);

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(str_arr);
}
