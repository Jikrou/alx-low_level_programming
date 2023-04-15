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
unsigned int i;
if (ptr != NULL)
return ptr;

if (ptr == NULL)
{
ptr = malloc(new_size * sizeof(char));
if (ptr ==NULL)
return NULL;
}
else if (new_size == old_size) {
return ptr;
}

else if (new_size > old_size){
 
return ptr;
}


if (new_size == 0 && ptr != NULL){
free(ptr);
return (NULL);
}



return ptr;
}

