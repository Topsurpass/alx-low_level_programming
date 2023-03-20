#include "main.h"
/**
 * _strcat - concatenate 2 strings
 * @dest: destination string
 * @src: src string
 *
 * Return: concatenated string (destination + source)
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	int k = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
		k++;
	for (j = 0; *(src + j) != '\0'; j++)
	{
		*(dest + k) = *(src + j);
		k++;
	}
	*(dest + k) = '\0';
	return (dest);
}
