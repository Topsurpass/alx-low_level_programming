#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - Generate random valid passwords for
 * program 101-crackme
 *
 * Return: 0 (success) exit the program
 */
int main(void)
{
	int i, j, add;
	int passKey[100];

	add = 0;
	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		passKey[i] = rand() % 78;
		add += (passKey[i] + '0');
		_putchar(passKey[i] + '0');
		if ((2772 - add) - '0' < 78)
		{
			j = 2772 - add - '0';
			add += j;
			_putchar(j + '0');
			break;
		}
	}
	_putchar('\n');
	return (0);
}
