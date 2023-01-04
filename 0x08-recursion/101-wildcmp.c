/**
 * match_substring - check is substring after wildcard
 * matches string a
 * @a: first string
 * @b: second string
 * @wildcrd: position after wildcard
 *
 * Return: 1 if string a and b match and 0 if not
 */
int match_substring(char *a, char *b, char *wildcrd)
{
	if (*a == '\0' && *b == '\0')
		return (1);
	if (*a == '\0' && *b == '*')
		return (match_substring(a, b + 1, b + 1));
	if (*a == '\0' && *b != '\0')
		return (0);
	if (*b == '*')
		return (match_substring(a, b + 1, b + 1));
	if (*a == *b)
		return (match_substring(a + 1, b + 1, wildcrd));
	else
		return (match_substring(a + 1, wildcrd, wildcrd));
}
/**
 * wildcmp - compare strings using wildcard
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if matched and 0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (match_substring(s1, (s2 + 1), (s2 + 1)));
	else
		return (0);
}
