#include "main.h"
#include <string.h>
/**
 * _strcpy - copy strings
 * @dest: the buffer argument
 * @src: The source argument
 * Return: return buffer string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int size = strlen(src);

	for (i = 0; i <= size; i++)
		dest[i] = src[i];
	return (dest);
}
