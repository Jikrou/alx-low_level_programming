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

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
		if (new_size == old_size)
			return (ptr);
		if (ptr == NULL)
			return (p);
		else if (ptr != NULL)
		{
			d = ptr;
			if (new_size > old_size)
			{
				for (i = 0; i < old_size; i++)
				{
					p[i] = d[i];
				}
			}
			else if (new_size < old_size)
			{
				for (i = 0; i < new_size; i++)
				{
					p[i] = d[i];
				}
			}
		}
		free(ptr);
		return (p);
}
