#include "main.h"
/**
 * _strncat - concatenate strings 1 with n bytes
 * characters of string 2
 *
 * @dest: destination string
 * @src: source string
 * @n: number of characters of string 2
 *
 * Return: Destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	k = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
		k++;

	for (j = 0; *(src + j) != *(src + n); j++)
	{
		*(dest + k) = *(src + j);
		k++;
	}
	return (dest);
}
