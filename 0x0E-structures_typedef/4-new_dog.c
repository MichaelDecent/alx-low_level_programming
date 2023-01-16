#include "dog.h"

/**
 * new_dog - A function that creates a new dog
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 *
 * Return: the a pointer to the sturct new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_ptr;
	dog_ptr = malloc(sizeof(dog_t));
	if (dog_ptr == NULL)
	       return (NULL);

	dog_ptr->name = name;
	dog_ptr->age = age;
	dog_ptr->owner = owner;

	return (dog_ptr);
}
