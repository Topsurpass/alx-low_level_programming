#include "main.h"
#include <string.h>
/**
 * puts2 - print characters that are even
 * @str: Sting argument
 */
void puts2(char *str)
{
	int i;
	int size = strlen(str);

	for (i = 0; i < size; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
