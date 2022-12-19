#include "main.h"
#include <string.h>
/**
 * switchChar - switch characters between first and second
 * @first: first character argument
 * @second: second character argument
 */

void switchChar(char *first, char *second)
{
	char a = *first;
	*first = *second;
	*second = a;
}

/**
 * rev_string - reverse string characters
 * @s: The string argument
 */

void rev_string(char *s)
{
	int i, size;

	size = strlen(s) - 1;

	for (i = 0; i <= size; i++)
	{
		switchChar(s + size, s + i);
		size--;
	}
}
