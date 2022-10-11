#ifndef _dog_h
#define _dog_h

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - Struct type
 * @name: name
 * @age: age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struct dog_t - new type of struct dog
 * @name: name
 * @age: age
 * @owner: owner
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
