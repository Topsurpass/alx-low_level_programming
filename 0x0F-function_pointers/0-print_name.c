#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print name given / supplied
 * @name: the name supplied
 * @f: the function pointer (call back function)
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) & (f != NULL))
		f(name);
}
