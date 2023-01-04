/**
 * check_prime - test prime numbers
 * @num: the number
 * @divider: the prime number divider
 *
 * Return: 0 if not prime and 1 if prime
 */
int check_prime(int num, int divider)
{
	if (num == divider || num == 2)
	{
		return (1);
	}
	if (divider > 1 && (!(num % divider)))
	{
		return (0);
	}
	return (check_prime(num, divider + 1));
}

/**
 * is_prime_number - check if number is a prime
 * number or not
 * @n: the number
 *
 * Return: 0 (if not prime), 1 (if prime)
 */

int is_prime_number(int n)
{
	int i;

	i = 0;

	if (n < 2 || (!(n % 2)))
	{
		return (0);
	}
	return (check_prime(n, i));
}
