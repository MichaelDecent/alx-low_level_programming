#include "dog.h"
#include <stdio.h>
/**
 * init_dog - A function that initialize a variable of type
 * @d: object of the structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog))
	if (d == NULL)
		return(NULL);

	d -> name = name;
	d -> age = age;
	d -> owner = owner
}
