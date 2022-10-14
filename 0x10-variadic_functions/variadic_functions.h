#ifndef _variadic_functions_h
#define _variadic_functions_h

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
#endif
