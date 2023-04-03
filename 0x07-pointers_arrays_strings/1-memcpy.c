#include "main.h"
/**
 * _mempcy - a function that copies memory area
 * @dest: memory area to copie to
 * @src: memory area to copie from
 * @n: numbers of byte to copie
 * Return: a pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ms = dest;
	int i;

	for (i = 0; i < n; i++)
	{
		mr[i] = src[i];
	}
	return (dest);
}
