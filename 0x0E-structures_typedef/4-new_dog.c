#include "dog.h"
/**
 * new_dog - A function pointer that creates a new dog
 * @name: name pointer
 * @age: age
 * @owner: owner pointer
 *
 * Return: pointer else NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	char *ptr;

	ptr = malloc(sizeof(dog_t))
	if (ptr == NULL)
		return (NULL);
	for (i = 0; *(name + i) != 0; i++)
	{
		ptr[i] = *(name + i);
	}
	for (j = 0; *(owner + j) != 0; i++, j++)
	{
		ptr[i] = *(owner + j);
	}
	return (ptr);
}
