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
	int i = 0, j;

	while (needle[i] != '\0')
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				return ((haystack + j));
			}
		}
		i++;
	}
	return (NULL);
}
