#include "main.h"
#include <stdio.h>
/**
 * main - The entry point to our program
 * Return: 0 (end the program)
 */

int main(void)
{
	int i;
	int sumIJ = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sumIJ += i;
	}
	printf("%d\n", sumIJ);
	return (0);
}
