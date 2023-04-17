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
	dog_t *new_dog;
	int len_n, len_o;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	while (name[len_n])
		len_n++;
	while (owner[len_o])
		len_o++;

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (dog);
}
