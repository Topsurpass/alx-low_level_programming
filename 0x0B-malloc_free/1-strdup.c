#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - get the length of string
 * @s: the string
 *
 * Return: the length of string
 */

int _strlen(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (0);
	i++;
	return (i + _strlen(s + i));
}

/**
 * _strdup - returns pointer to a newly allocated
 * space in memory
 * @str: the string to be duplicated
 *
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i;

	char *arr;

	if (str == NULL)
		return (NULL);

	arr = malloc(sizeof(char) * _strlen(str));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < _strlen(str); i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';
	return (arr);
}

