#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array,
 * using malloc.
 * @nmemb: number of elements in array
 * @size: size of each element in bytes
 * Return: a pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *cal;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	cal = malloc(nmemb * size);
	if (cal == NULL)
	{
		return (NULL);
	}
	else if (cal != NULL)
	{
		*cal = 0;
	}
	return (cal);
}

