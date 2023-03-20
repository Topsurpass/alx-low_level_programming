/**
 * _isupper - Check for uppercase
 * @c: the first argument of type integer
 * Return: return 0 if uppercase and 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
