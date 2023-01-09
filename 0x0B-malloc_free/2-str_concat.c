#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - The length of string
 * @s: the string
 *
 * Return: the length
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
 * str_concat - concatenate 2 strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to a newly allocated space
 * in memory which contain s1 followed byu s2
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;

	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	arr = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2)));

	if (arr == NULL)
		return (NULL);


	for (i = 0; s1[i] != '\0'; i++)
	{
		arr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		arr[i] = s2[j];
		i++;
	}
	arr[i] = '\0';

	return (arr);
}
