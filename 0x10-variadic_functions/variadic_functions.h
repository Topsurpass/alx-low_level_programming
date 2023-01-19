#ifndef _VARIADIC_FUNCTIONS
#define _VARIADIC_FUNCTIONS

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);

#endif
