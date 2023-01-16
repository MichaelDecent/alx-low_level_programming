#include "dog.h"

/**
 * print_dog - A function that prints a struct dog
 * @d: a pointer to the struct
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit();
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->name);
		if (d->age == 0)
			printf("Age: (nil)");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}

}
