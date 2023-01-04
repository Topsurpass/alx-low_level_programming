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
