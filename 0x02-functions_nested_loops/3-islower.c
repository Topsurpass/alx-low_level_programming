#include "main.h"
/**
 * _islower - check if an alphabet is lowercase and
 * returns 1 if lowercase and 0 if uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
