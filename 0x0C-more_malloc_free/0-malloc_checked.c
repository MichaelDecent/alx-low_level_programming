#include "main.h"
/**
 * malloc_checked - A function that allocates memory using melloc
 * @b: the size of the memory to be allocated
 * Return: pointer else 98 if malloc fails
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
