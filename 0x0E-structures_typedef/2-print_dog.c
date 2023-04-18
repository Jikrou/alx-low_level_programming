#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: the struct
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: %s\n", d->name);
	printf("Name: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}
