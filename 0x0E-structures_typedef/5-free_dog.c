#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Functions that frees dogs
 * @d: pointer
 * 
 * Return: void
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	return;

	free(d->name);
	free(d->owner);
	free(d);
}
