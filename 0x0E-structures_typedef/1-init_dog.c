#include "dog.h"
#include <stddef.h>
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: a block of memory
 * @name: a string
 * @age: a number
 * @owner: a string
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
