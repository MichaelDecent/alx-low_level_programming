#include "function_pointers.h"
/**
 * print_name - A function thta prints name
 * @name: a name pointer
 * @f: a function pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
