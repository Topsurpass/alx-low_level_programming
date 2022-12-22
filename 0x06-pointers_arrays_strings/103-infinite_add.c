#include "main.h"
/**
 * infinite_add - function that adds 2 numbers together
 * @n1: first number
 * @n2: second number
 * @r: the result gotten
 * @size_r: The length of the result (@r)
 * Return: summation of the 2 numbers
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, ff, ss, dd;

	i = 0, j = 0, l = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		l = i;
	else
		l = j;
	if (l + 1 > size_r)
		return (0);
	r[l] = '\0';
	for (k = l - 1; k >= 0; k--)
	{
		i--;
		j--;
		if (i >= 0)
			ff = n1[i] - '0';
		else
			ff = 0;
		if (j >= 0)
			ss = n2[j] - '0';
		else
			ss = 0;
		r[k] = (ff + ss + dd) % 10 + '0';
		dd = (ff + ss + dd) / 10;
	}
	if (dd == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = dd + '0';
	}
	return (r);
}
