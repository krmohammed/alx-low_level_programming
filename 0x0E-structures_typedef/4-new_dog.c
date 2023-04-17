#include "dog.h"

/**
 * new_dog - creates a new dog instance
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 *
 * Return: dog, else NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
