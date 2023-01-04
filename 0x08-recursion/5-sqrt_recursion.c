/**
 * check_4_sqroot - check of number for its square
 * root
 * @sqr: the square root number
 * @i: the number to test with it with
 *
 * Return: the test number if its sqaure equals the
 * square root num
 */

int check_4_sqroot(int sqr, int i)
{
	if ((i * i) > sqr)
	{
		return (-1);
	}
	if ((i * i) == sqr)
	{
		return (i);
	}
	return (check_4_sqroot(sqr, i + 1));
}

/**
 * _sqrt_recursion - print the natural square-root
 * of a number
 * @n: the number
 *
 * Return: the square root of the number
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < i)
	{
		return (-1);
	}
	check_4_sqroot(n, i);
}
