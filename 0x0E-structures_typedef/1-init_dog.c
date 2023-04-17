#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: Pointer to initialize a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of dogs owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
