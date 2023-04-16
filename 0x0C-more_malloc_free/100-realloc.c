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
	char *p, *d;
	unsigned int i;

	if (new_size == old_size)
	return (ptr);

		if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
		p = malloc(new_size);
		if (p == NULL)
		return (NULL);

		if (ptr == NULL)
			return (p);
		if (ptr != NULL)
		{
			d = ptr;
			if (new_size > old_size)
			{
				for (i = 0; i < old_size; i++)
				{
					p[i] = d[i];
				}
				free(ptr);
				return (p);
			}
			else if (new_size < old_size)
			{
				for (i = 0; i < new_size; i++)
				{
					p[i] = d[i];
				}
				free(ptr);
				return (p);
			}
		}
		return (p);
}
