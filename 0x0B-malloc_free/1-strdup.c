#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns pointer to a newly allocated
 * space in memory
 * @str: the string to be duplicated
 *
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	int length = 0;

	char *arr;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		length++, i++;
	}

	arr = malloc(sizeof(char) * length);

	if (arr == NULL)
		return (NULL);

	while (j < length)
	{
		arr[j] = str[j];
		j++;
	}
	/*arr[i] = '\0';*/
	return (arr);
}

