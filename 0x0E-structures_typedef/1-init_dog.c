#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: a pointer to struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
