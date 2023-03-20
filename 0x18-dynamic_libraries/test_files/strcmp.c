#include "main.h"
/**
 * _strcmp - Compare 2 strings
 * @s1: String 1
 * @s2: string 2
 *
 * Return: 0 (if equal), >0 (if s2 > s1)
 * & < 0 (if s2 < s1)
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j = 0;

	for (i = 0; *(s1 + i) == *(s2 + i) && *(s1 + i); i++)
		j++;
	if (*(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
}
