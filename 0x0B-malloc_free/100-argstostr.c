#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - length of string
 * @s: the string
 *
 * Return:  the length of string
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
 * argstostr - Concatenate all the arguments of
 * my program
 * @ac: argument counter
 * @av: argument array
 *
 * Return: pointer to char (new modified string)
 */
char *argstostr(int ac, char **av)
{
	char *arr;
	int i, j, length, k, l;

	length = 0;
	l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		length += _strlen(av[i]);
	}
	length += (ac + 1);
	arr = malloc(sizeof(char) * length);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (j = 0; j < ac; j++)
	{
		for (k = 0; k < _strlen(av[j]); k++)
		{
			arr[l++] = av[j][k];
		}
		arr[l++] = '\n';
	}
	return (arr);
}
