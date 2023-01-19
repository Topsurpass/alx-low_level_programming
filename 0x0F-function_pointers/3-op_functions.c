#include "3-calc.h"

/**
 * op_add - sum 2 integers together
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the summation of both integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract 2 integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the difference of the 2 integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply 2 integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the product of the 2 integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - dive 2 integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the division of the 2 integers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - get the remainder of the division
 * of the 2 integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
