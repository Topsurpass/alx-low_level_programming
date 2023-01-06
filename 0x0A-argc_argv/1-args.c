#include <stdio.h>
#include "main.h"
/**
 * main - the entry point of my function
 * @argc: the argument counter
 * @argv: array of pointer
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
