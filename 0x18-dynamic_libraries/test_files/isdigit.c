
/**
 * _isdigit - Check if character is digit
 * @c: The first argument of type integer
 * Return: 1 (digit), 0 (other character)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
