#include <stdlib.h>
#include <stdio.h>

/**
 * main - the prgram entry point
 * @argc: argument counter
 * @argv: argument array or vector
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, no_of_bytes;
	char *str;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	no_of_bytes = atoi(argv[1]);

	if (no_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	str = (char *)main;

	for (i = 0; i < no_of_bytes - 1; i++)
		printf("%02hhx ", str[i]);

	printf("%02hhx\n", str[i]);

	return (0);
}


