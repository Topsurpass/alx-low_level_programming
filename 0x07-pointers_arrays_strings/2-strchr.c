#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: the string
 * @c: the character to be search
 *
 * Return: a pointer to char (modified string)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return ((s + i));
		else
			return (0);
	}
	return (0);
}
