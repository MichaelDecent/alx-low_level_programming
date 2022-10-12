#include "function_pointers.h"
/**
 * print_name - A function thta prints name
 * @name: a pointer to char
 * @f: a function pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
