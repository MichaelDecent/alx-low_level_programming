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
	int i = 0, sizename = 0, sizeowner = 0;
	dog_t *dog;


	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	while (*(name + i) != '\0')
	{
		i++;
		sizename++;
	}
	dog->name = malloc((sizename + 1) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= sizename; i++)
		dog->name[i] = name[i];
	i = 0;
	while (*(owner + i) != '\0')
	{
		i++;
		sizeowner++;
	}
	dog->owner = malloc((sizeowner + 1) * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= sizeowner; i++)
		dog->owner[i] = owner[i];
	dog->age = age;
	return (dog);
}
