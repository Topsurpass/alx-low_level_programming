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
	int i, j, k;
	int l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	arr = malloc(sizeof(char *) * ac);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{

		for (j = 0; j < _strlen(av[i]); j++)
		{
			arr[l++] = av[i][j];
		}
		arr[l++] = '\n';
	}
	return (arr);

}
