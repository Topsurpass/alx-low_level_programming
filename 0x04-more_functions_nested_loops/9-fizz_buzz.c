#include "main.h"
#include <stdio.h>
/**
 * main - Print Buzz if number is multiple
 * of 3 and Fizz if 5 and FizzBuzz if 3 and 5
 *
 * Return: 0 (end program)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else if ((i % 15) == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
		printf("\n");
	return (0);
}
