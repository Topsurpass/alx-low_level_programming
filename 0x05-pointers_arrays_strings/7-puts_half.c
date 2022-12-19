#include "main.h"
#include <string.h>
/**
 * puts_half - Start printing from the middle
 * of the array string
 * @str: String argument
 */

void puts_half(char *str)
{
	int i;
	int size = strlen(str);

	if (size % 2 == 0)
		i = (size / 2);
	else
		i = ((size / 2) + 1);
	while (i < size)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
