#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: pointer
 * @src: pointer
 * @n: bytes number
 * Return: a pointer to dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *i = dest;

	while (*i != '\0')
	{
		i++;
	}
	while (*src != '\0' && n > 0)
	{
		*i = *src;
		i++;
		src++;
		n--;
	}
	*i = '\0';
	return (dest);
}

