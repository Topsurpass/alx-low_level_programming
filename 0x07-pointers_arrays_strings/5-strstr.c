#define NULL 0
/**
 * _strstr - locate a substring
 * @haystack: the string
 * @needle: the substring
 *
 * Return: pointer to char(modified string)
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (neddle[0] == '\0')
		return (NULL);

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
				return ((haystack + j));
			if (haystack[j + 1] == '\0' && needle[i] != haystack[j + 1])
				return (NULL);
		}
	}
	return (0);
}
