#include "main.h"
#include <stdio.h>
/**
 * FizzBuzz - Prints multiple of 3 is Fizz and
 * multiple of 5 as Buzz and multiple of both
 * 3 and 5 as FizzBuzz
 */
int main(void)
{
	void FizzBuzz(void)
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
	}
	FizzBuzz();
	return (0);
}
