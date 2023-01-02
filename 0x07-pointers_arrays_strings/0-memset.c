#include "main.h"
/**
 * _memset - fills the memory with a constant byte
 * @s: the destination string / memory
 * @b: the constant to fill the buffer with
 * @n: number of bytes to fill the buffer with
 *
 * Return: a pointer to char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
