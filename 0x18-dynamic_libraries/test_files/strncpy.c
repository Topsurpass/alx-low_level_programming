#include "main.h"

/**
 * _strncpy - Copy string of character of size n from
 * source string to destination string
 *
 * @dest: destination string
 * @src: source string
 * @n: character size
 *
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; *(src + i) != '\0' && i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
