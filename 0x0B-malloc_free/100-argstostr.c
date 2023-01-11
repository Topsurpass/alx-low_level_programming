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
	int a = 0;

	if (s[a] == 0)
	{
		return (0);
	}
	a++;
	return (a + _strlen(s + a));
}
/**
 * argstostr - concatenates program arguments
 * @ac: argument count
 * @av: argument arrays
 *
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *arr;
	int i, j;
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
