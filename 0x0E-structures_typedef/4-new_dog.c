#include "dog.h"

/**
 * _strcpy - copies a string to another
 * @dest: string to receive copied text
 * @src: source of copied text
 *
 * Return: copied text in the form of dest
 */


char *_strcpy(char *dest, char *src)
{
	int j, len;

	for (len = 0; src[len] != '\0'; len++)
		;

	for (j = 0; j <= len; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: newly created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	int len1 = 0, len2 = 0;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);

	while (name[len1])
		len1++;
	while (owner[len2])
		len2++;

	new_d->name = malloc(sizeof(char) * (len1 + 1));
	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}
	_strcpy(new_d->name, name);

	new_d->owner = malloc(sizeof(char) * (len2 + 1));
	if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}
	_strcpy(new_d->owner, owner);

	new_d->age = age;

	return (new_d);
}
