#include "dog.h"

/**
 * free_dog - a function that frees dogs
 * @d: structure
 * return - nothing.
 */

void free_dog(dog_t *d)
{
	if (d == 0)
		return;


	free(d->name);
	free(d->owner);
	free(d);
}
