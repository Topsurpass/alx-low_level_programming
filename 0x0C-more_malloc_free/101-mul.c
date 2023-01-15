#include "main.h"
#include <stdlib.h>

/**
 * _strlen - get length of string
 * @s: the string
 *
 * Return: the string length
 */

int _strlen(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);
	i++;
	return (i + _strlen(s + i));
}
/**
 * print_char - print characters
 * @s: the string
 *
 */
void print_char(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
/**
 * _allocator - allocate space
 * @size: size of memory block in bytes
 *
 * Return: void pointer
 */
void *_allocator(unsigned int size)
{
	void *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(size);

	if (arr == NULL)
		return (NULL);
	else
		return (arr);
}
/**
 * rmv_lead_0 - remove leading zero
 * @arr: the string
 * @length_1: the length of string 1
 * @length_2: the length of string 2
 *
 * Return: nothing
 */
void rmv_lead_0(char *arr, int length_1, int length_2)
{
	int i, j;

	i = 0;

	while (arr[i] == '0')
		i++;
	if (i == length_1 + length_2)
	{
		arr[1] = '\0';
		arr[0] = '0';
	}
	else
	{
		j = 0;
		for (; arr[i] != '\0'; j++, i++)
			arr[j] = arr[i];
		arr[j] = '\0';
	}
}
/**
 * multiply - multiply digits stored in array
 * of characters
 * @num_1: the string 1 array
 * @num_2: the string 2 attay
 * @answer: the result of multiplication of
 * string 1 and 2
 * Renurn: nothing
 */
void multiply(char num_1[], char num_2[], char answer[])
{
	int len_1 = _strlen(num_1);
	int len_2 = _strlen(num_2);
	int keep = 0;
	int i, j, temp, product;
	char *err = "Error";

	for (i = 0; i < (len_1 + len_2); i++)
		answer[i] = '0';
	answer[len_1 + len_2] = '\0';

	for (i = (len_1 - 1); i >= 0; i--)
	{
		if ((num_1[i] < '0') || (num_1[i] > '9'))
		{
			print_char(err);
			exit(98);
		}
		else
		{
			keep = 0;
			for (j = (len_2 - 1); j >= 0; j--)
			{
				if ((num_2[j] < '0') || (num_2[j] > '9'))
				{
					print_char(err);
					exit(98);
				}
				if (i + j + 1 < len_1 + len_2)
				{
					product = (num_1[i] - '0') * (num_2[j] - '0');
					temp = (answer[i + j + 1] - '0') + product + keep;
					answer[i + j + 1] = temp % 10 + '0';
					keep = temp / 10;
				}
			}
		}
		answer[i] += keep;
	}
	rmv_lead_0(answer, len_1, len_2);
}
/**
 * check_argc - check if argument is correct
 * @args: the arguments
 *
 * Return: nothing
 */
void check_argc(int args)
{
	char error[6] = "Error";

	if (args > 3 || args == 1 || args == 2)
	{
		print_char(error);
		exit(98);
	}
}

/**
 * main - multiplies 2 positive numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 (success), 98 (incorrect argument)
 */
int main(int argc, char *argv[])
{
	char *answer, error[6] = "Error";
	int len_1, len_2;

	check_argc(argc);

	if (argc == 3)
	{
		len_1 = _strlen(argv[1]);
		len_2 = _strlen(argv[2]);
		answer = _allocator(sizeof(*answer) * (len_1 + len_2 + 1));
		if (answer == NULL)
		{
			free(answer);
			print_char(error);
		}
		multiply(argv[1], argv[2], answer);
		print_char(answer);
		free(answer);
	}
	return (0);
}
