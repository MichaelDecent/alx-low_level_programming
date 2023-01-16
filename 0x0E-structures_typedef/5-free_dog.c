#include "dog.h"
/**
 * free_dog - A function that frees dog
 * @d: a pointer to struct dog;
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{	
		free(d->owner);
		free(d->name);
		free(d);
	}
}
