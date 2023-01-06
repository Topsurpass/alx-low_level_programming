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
	int i, j;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if ((argv[i][j] < '0' || argv[i][j] > '9'))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

