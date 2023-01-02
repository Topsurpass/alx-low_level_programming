/**
 * set_string - sets the value of a pointer
 * to char
 * @s: pointer to pointer (double pointer)
 * @to: pointer to char
 *
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
