#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - the entry point to my program
 * @argc: the argument counter
 * @argv: array of pointers to char
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int result = 1;
	int i;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
