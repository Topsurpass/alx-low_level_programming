#include "main.h"
/**
 * _strpbrk - search a string for any of
 * a set of bytes.
 * @s: the string
 * @accept: the set of bytes to match
 *
 * Return: a pointer to char (modified string)
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (accept[j] == s[i])
				return ((s + i));
	}
	return (0);
}
