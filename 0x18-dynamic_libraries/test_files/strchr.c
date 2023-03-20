#include "main.h"
#define NULL 0
/**
 * _strchr - locate a character in a string
 * @s: the string
 * @c: the character to be search
 *
 * Return: a pointer to char (modified string)
 */

char *_strchr(char *s, char c)
{

	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return ((s + i));
	else
		return (NULL);
}
