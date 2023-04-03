#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer
 * @b: character
 * @n: integer
 * Return: a pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *y = s;

	while (n--)
	{
		*y++ = b;
	}
	return (s);
}
