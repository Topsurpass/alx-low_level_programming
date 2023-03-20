#include "main.h"
/**
 * _isalpha - check if the argument is an alphabet and
 * returns 1 if it's upper or lowercase and 0 if otherwise
 * @c: Parameter supplied to _isaplha function
 *
 * Return: 1 (alphabet), 0 (non-alphabet)
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
