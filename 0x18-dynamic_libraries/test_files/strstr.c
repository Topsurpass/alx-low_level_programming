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
	int i = 0, j, k;

	if (needle[0] == '\0')/* if needle is empty or null terminated*/
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			k = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[k] == needle[j])
				{
					j++, k++;
				}
				else
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
