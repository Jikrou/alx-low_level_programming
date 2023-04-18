#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - a function that creates a new dog.
 * @name: a pointer to a string
 * @age: an integer
 * @owner: a pointer to a string
 *
 * Return: a dog_t struct by value
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);

	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	strcpy(d->owner, owner);

	d->age = age;
	return (d);
}


