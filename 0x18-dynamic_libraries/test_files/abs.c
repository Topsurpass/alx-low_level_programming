
#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: The parameter for the function which is an integer
 *
 * Return: checkSign if n is negative and n if positive
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
	_putchar('\n');
}
