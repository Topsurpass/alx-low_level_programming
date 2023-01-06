#include <stdio.h>
#include "main.h"

/**
 * main - the entry point of my program
 * @argc: the argument counter
 * @argv: the array of pointer
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
