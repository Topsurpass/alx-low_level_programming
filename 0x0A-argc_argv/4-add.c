#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - the entry point to my program
 * @argc: the argument counter
 * @argv: the array of pointers to char
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= '0' || *argv[i] <= '9')
				sum += atoi(argv[i]);
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
