#include "main.h"
/**
 * _islower - check if an alphabet is lowercase or not
 * @c: The argument that will be supplied to the function
 *
 * Return: 1 (lowercase) 0 (otherwise)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
