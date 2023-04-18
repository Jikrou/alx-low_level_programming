#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: a block of memory
 * @name: a string
 * @age: a number
 * @owner: a string
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
