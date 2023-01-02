#include "main.h"

/**
 * _memcpy - copy n bytes from memory area to
 * another memory area
 * @dest: destination memory or string
 * @src: source string or memory
 * @n: number of bytes to copy
 *
 * Return: pointer to char string or memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
