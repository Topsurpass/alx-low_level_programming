/**
 * factorial - prints the factorial of a number
 * @n: the number
 *
 * Return: the factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
	{

		return (-1);
	}
	if (n == 0 || n == 1)
		return (n);
	return (n * factorial(n - 1));
}
