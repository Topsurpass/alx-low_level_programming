#include "variadic_functions.h"

/**
 * print_all - print anything with respect to
 * the argument supplied
 * @format: the list of format specifiers
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list print_box;
	int i, signal;
	char *arr_str;

	va_start(print_box, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(print_box, int));
				signal = 0;
				break;
			case 'i':
				printf("%d", va_arg(print_box, int));
				signal = 0;
				break;
			case 'f':
				printf("%f", va_arg(print_box, double));
				signal = 0;
				break;
			case 's':
				arr_str = va_arg(print_box, char *);
				if (arr_str == NULL)
					arr_str = "(nil)";
				printf("%s", arr_str);
				signal = 0;
				break;
			default:
				signal = 1;
				break;
		}
		if (format[i + 1] != '\0' && signal == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(print_box);
}



