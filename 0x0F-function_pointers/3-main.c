#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - the entry point to my program
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 (success);
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("%d\n", argc);
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if ((func == NULL) || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", func(num1, num2));

	return (0);
}
