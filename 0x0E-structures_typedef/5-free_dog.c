#include "dog.h"

/**
 * free_dog - frees memory allocated to dog structure
 *
 * @d: struct dog
 *
 */

void free_dog(dog_t *d)
{
	free(d);
}
