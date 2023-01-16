#include "dog.h"

/**
 * _strlen - A function that returns the length of string
 * @str: string
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	len = len + 1;
	return (len);
}

/**
 * _strcopy - A function that copies a string
 * @des: the destination string
 * @src: the source string
 *
 * Return: destination string
 */
char *_strcopy(char *des, char *src)
{
	int i;

	for (i = 0; i < _strlen(src); i++)
	{
		des[i] = src[i];
	}
	return (des);
}

/**
 * new_dog - A function that creates a new dog
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 *
 * Return: the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_ptr;

	if (name == NULL || age == NULL)
                return(NULL);

	dog_ptr = malloc(sizeof(dog_t));
	if (dog_ptr == NULL)
		return (NULL);

	dog_ptr->name = malloc(sizeof(char) * (_strlen(name)));
	if (dog_ptr->name == NULL)
	{
		free(dog_ptr);
		return (NULL);
	}

	dog_ptr->owner = malloc(sizeof(char) * (_strlen(owner)));
	if (dog_ptr->owner == NULL)
	{
		free(dog_ptr->name);
		free(dog_ptr);
		return (NULL);
	}

	dog_ptr->name = _strcopy(dog_ptr->name, name);
	dog_ptr->age = age;
	dog_ptr->owner = _strcopy(dog_ptr->name, owner);

	return (dog_ptr);
}
