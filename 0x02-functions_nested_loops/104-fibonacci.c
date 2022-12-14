#include <stdio.h>
/**
 * main - Program entry point
 * Return: 0 (exit program)
 */
int main(void)
{
	int i, j;
	unsigned long a = 1, b = 1;
	unsigned long add = 0;
	long head_a, tail_a, head_b, tail_b, total_head, total_tail;

	printf("1");
	for (i = 2; i < 93; i++)
	{
		add = a + b;
		a = b;
		b = add;
		printf(", %lu", add);
	}

	head_a = a / 1000000000;
	tail_a = a % 1000000000;
	head_b = b / 1000000000;
	tail_b = b % 1000000000;

	for (; i < 99; i++)
	{
		j = (tail_a + tail_b) / 1000000000;
		total_tail = (tail_a + tail_b) - (1000000000 * j);
		total_head = (tail_a + tail_b) + j;

		printf(", %lu%lu", total_head, total_tail);

		head_a = head_b;
		tail_a = tail_b;
		head_b = total_head;
		tail_b = total_tail;
	}
	printf("\n");
	return (0);
}
