#include <stdio.h>
/**
 * _isdigit - Check if character is digit
 * @c: The first argument of type integer
 * Return: 1 (digit), 0 (other character)
 */

int _isdigit(int c)
{
	int a = isdigit(c);

	if (a == 1)
		return (1);
	else
		return (0);
}
