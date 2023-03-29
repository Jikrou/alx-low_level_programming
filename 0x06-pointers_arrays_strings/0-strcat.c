#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: pointer
 * @src: pointer
 * Return: a pointer to dest
*/
char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*i != '\0')
	{
		i++;
	}
	while (*src != '\0')
	{
		*i = *src;
		i++;
		src++;
	}
	*i = '\0';
	return (dest);
}
