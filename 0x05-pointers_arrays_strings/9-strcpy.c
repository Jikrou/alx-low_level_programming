#include "main.h"
/**
 * _strcpy - a function that copies the string pointed to by src,
 *  including the terminating null byte (\0),
 *   to the buffer pointed to by dest.
 * @src: pointer that point to the string
 * @dest: pointer to the buffer
 * Return: a pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	char *i = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (i);
}
