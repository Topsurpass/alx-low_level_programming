/**
 * cap_string - Capitalize first character
 * of a word.
 * @s: the string
 * Return: modified string
 */

char *cap_string(char *s)
{
	int i, j;
	int signs[] = {32, 9, 11, 44, 59, 46, 33,
		63, 34, 40, 41, 123, 125
	}; /* ASCII key for the word separator*/

	i = 0;

	/**
	 * Make the first character that starts the sentence
	 * uppercase;
	 * while the character after the 1st does not end the
	 * sting, loop my ASCCI key separator and check if
	 * the character is a small letter and if character
	 * that preceeds the currect one is equal to the ascii
	 * separator, if yes, turn to capital letter
	 */
	if (*(s + i) >= 97 && *(s + i) <= 122)
		*(s + i) = *(s + i) - 32;
	i++;
	while (*(s + i) != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if ((*(s + i) >= 97 && *(s + i) <= 122) && *(s + (i - 1)) == signs[j])
				*(s + i) = *(s + i) - 32;
		}
		i++;
	}
	return (s);
}

