#include "main.h"
/**
 * swap_int - Switch both arguments
 * @a: First argument or paramenter
 * @b: Second argument or parameter;
 */
void swap_int(int *a, int *b)
{
	int storeA = *a;
	*a = *b;
	*b = storeA;
}
