#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: pointer
 * @src: pointer
 * @n: number of bytes
 *Return: a pointer
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *i = dest;

	while (*src != '\0' && n > 0)
	{
		*i = *src;
		i++;
		src++;
		n--;
	}


		while (n > 0)
		{
			*i = '\0';
			i++;
			n--;
		}
	return (dest);
}
