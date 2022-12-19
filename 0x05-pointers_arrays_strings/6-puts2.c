#include "main.h"
#include <string.h>
/**
 * puts2 - print characters that are even
 * @str: Sting argument
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
