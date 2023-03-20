#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: the string
 * @accept: the substring
 *
 * Return: the length of the substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (len);
		}
	}
	return (len);
}
