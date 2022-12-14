#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - the length of string
 * @s: the string
 *
 * Return: the string length
 */
int _strlen(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (1);
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
	char *arr;
	int i;

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
