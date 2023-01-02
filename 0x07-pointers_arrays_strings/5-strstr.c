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

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
			if (needle[i] == haystack[j])
				return ((haystack + j));
	}
}
