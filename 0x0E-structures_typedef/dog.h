#ifndef _dog_h
#define _dog_h
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - define a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 */
<<<<<<< HEAD

=======
>>>>>>> a0c526d3f0c3e46d3ad506e9d0acd2ae291e7d65
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
