#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - Creates a new dog
 *
 * @name: String
 * @age: Age of dog
 * @owner: owners name
 *
 * Return: new dog, NULL if the function fails
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len, owner_len;

	name_len = strlen(name);
	owner_len = _strlen(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)

	return (NULL);

	new_dog->name = malloc(sizeof(char) * (name_len + 1));

	if (new_dog->name == NULL)

		free(new_dog);

			return (NULL);

	new_dog->owner = malloc(sizeof(char) * (owner_len + 1));

	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);

		return (NULL);
	}

	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}

/**
 * *_strcpy - copies string
 * @dest: buffer
 * @src: string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a, b;
	a = 0;

	while (src[a] != '\0')
		a++;

	for (b = 0; b < a; b++)
		dest[b] = src[b];

	dest[b] = '\0';

	return (dest);
}

/**
 * _stren - returns the lenght
 * @st: string
 *
 * Return: Lenght of the string
 *
 */

int _strlen(char *st)
{
	int a;
	a = 0;

	while (st[a] != '\0')
		a++;

	return (a);
}
