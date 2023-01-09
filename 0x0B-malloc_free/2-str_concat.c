#include <stdio.h>
#include <stdlib.h>
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
	int i, j, lens1, lens2, count_i, count_j;
	lens1 = 0;
	lens2 = 0;
	count_i = 0;
	count_j = 0;

	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[count_i])
		lens1++, count_i++;
	while (s2[count_j])
		lens2++, count_j++;
	arr = malloc(sizeof(char) * (lens1 + lens2));

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

	return (arr);
}
