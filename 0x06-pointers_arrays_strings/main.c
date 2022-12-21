#include "main.h"
#include <stdio.h>
#include <string.h>
int main(void)
{
	char text1[100];
	char *ptr;
	int i = 0;
	while (i < 100)
	{
		text1[i] = '*';
		i++;
	}
	text1[i] = '\0';
	ptr = _strncpy(text1, "Temitope is a good boy, olowosuyi self no smalll o, wetin you think ?", 48);
	printf("%s\n",ptr);
	return (0);
}
