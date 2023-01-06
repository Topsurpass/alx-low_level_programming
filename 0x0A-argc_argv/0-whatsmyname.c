#include <stdio.h>
/**
 * main - The entry point to our program
 * @argc: the length of parameter
 * @argv: and array of strings
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
