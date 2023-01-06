#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry to my program
 * @argc: the argument counter
 * @argv: array of pointers to char
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int notes[] = {25, 10, 5, 2, 1};
	int i, j, coins;

	coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}
	i = atoi(argv[1]);


	for (j = 0; j < 5; j++)
	{
		coins += i / notes[j];
		i = i % notes[j];
	}
	printf("%d\n", coins);
	return (0);
}
