#include <stdio.h>
#include "main.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int result = 1;
	int i;

	if (argc < 3)
		printf("Error\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			result= result * atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
