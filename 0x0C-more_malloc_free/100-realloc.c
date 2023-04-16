#include"main.h"
#include<stdlib.h>
/**
 * _realloc -  function that reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: size in bytes
 * @new_size: new allocated size
 * Return: a pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	p = malloc(new_size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size > 0)
	{
		if (new_size > old_size)
		{
			return (p);
		}
		else if (new_size == old_size)
		{
			return (ptr);
		}
		else if (ptr == NULL)
		{
			return (ptr = p);
		}
		ptr = p;
	}
	return (ptr);
	free(p);
}


