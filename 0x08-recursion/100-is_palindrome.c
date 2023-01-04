/**
 * _strlen_recursion - print the length of string
 * @s: the string
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}
	i++;
	return (i + _strlen_recursion(s + i));
}

/**
 * check_string - compare a and b to check if they match
 * @a: first index from left
 * @b: first index from right
 *
 * Return: 1 if string is palindrome and 0 if not palindrome
 */

int check_string(char *a, char *b)
{
	if (a >= b)
		return (1);
	if (*a == *b)
		return (check_string(a + 1, b - 1));
	return (0);
}
/**
 * is_palindrome - check if string is a palindrome
 * @s: the string
 *
 * Return: 1 if palindrome, 0 is not palindrome
 */

int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);
	return (check_string(s, (s + length - 1)));
}
