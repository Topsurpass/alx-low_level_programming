#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - get length of string
 * @s: the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	unsigned int i = 0;

	if (s[i] == '\0')
		return (0);
	i++;
	return (i + _strlen(s + i));
}
/**
 * string_nconcat - concatenates 2 strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of string 2 to concatenate
 *
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, j, len, str_1, str_2;

	str_2 = _strlen(s2);
	str_1 = _strlen(s1);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= str_2)
		n = (str_2);
	len = _strlen(s1) + n + 1;

	arr = malloc(sizeof(*arr) * len);

	if (arr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		arr[i] = s1[i];
	for (j = 0; j < n; j++)
		arr[i + j] = s2[j];
	arr[i + j] = '\0';

	return (arr);
}

