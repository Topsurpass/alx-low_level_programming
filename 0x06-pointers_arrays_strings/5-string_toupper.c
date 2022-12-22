#include <string.h>
/**
 * string_toupper - Change string to upper case
 * @s: the string
 *
 * Return: The modified string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) >= 97 && *(s + i) <= 122)
			*(s + i) = *(s + i) - 32;
	}
	return (s);
}
