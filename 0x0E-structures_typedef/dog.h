#ifndef _dog_h
#define _dog_h
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
 * dog_t - new type of struct dog
 * @name: name
 * @age: age
 * @owner: owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
