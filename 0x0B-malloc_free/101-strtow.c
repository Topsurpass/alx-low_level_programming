#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - find length of string
 * @str: the string
 *
 * Return: a pointer to an array of strings
 */
int _strlen(char *str)
{
	int i = 0;

	if (str[i] == '\0')
	{
		return (1);
	}
	i++;
	return (i + _strlen(str + i));
}
/**
 * word_count - count number of words in
 * a string
 * @s: the string
 *
 * Return: number of string
 */

int word_count(char *s)
{
	int i = 0;

	int no_of_words = 0;

	while (i <= _strlen(s))
	{
		if ((s[i] != ' ') && (s[i] != '\0'))
			i++;
		else if (((s[i] == ' ') || (s[i] == '\0')) && ((i && (s[i - 1] != ' '))))
		{
			no_of_words += 1;
			i++;
		}
		else
			i++;
	}
	return (no_of_words);
}

/**
 * strtow - split a string into words
 * @str: the string
 *
 * Return: splitted strings
 */
char **strtow(char *str)
{
	char **arr;
	int i, size = 0, j = 0, k = 0, no_of_words = word_count(str);

	if (no_of_words == 0)
		return (NULL);
	arr = (char **) malloc(sizeof(char *) * (no_of_words + 1));
	if (arr != NULL)
	{
		for (i = 0; i <= _strlen(str) && no_of_words; i++)
		{
			if ((str[i] != ' ') && (str[i] != '\0'))
				size++;
			else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
			{
				arr[j] = (char *) malloc(sizeof(char) * size + 1);
				if (arr[j] != NULL)
				{
					while (k < size)
					{
						arr[j][k] = str[(i - size) + k];
						k++;
					}
					arr[j][k] = '\0';
					size = k = 0;
					j++;
				}
				else
				{
					while (j-- >= 0)
						free(arr[j]);
					free(arr);
					return (NULL);
				}
			}
		}
		arr[no_of_words] = NULL;
		return (arr);
	}
	else
		return (NULL);
}

