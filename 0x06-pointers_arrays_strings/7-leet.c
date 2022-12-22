/**
 * leet - Encode strings, changes some
 * specified alphabets to some specified
 * digits.
 * @str: The string
 *
 * Return: The encoded string.
 */
char *leet(char *str)
{
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";
	int i, j;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (j = 0; *(c + j) != '\0'; j++)
		{
			if (*(str + i) == *(c + j))
			{
				*(str + i) = *(d + j);
			}
		}
	}
	return (str);
}

