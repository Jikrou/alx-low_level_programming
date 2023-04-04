#include "main.h"
/**
 * _strchr - a function that locates a characterin a string
 * @s: string
 * @c: character
 * Return: a pointer to the first occurrence
*/
char *_strchr(char *s, char c)
{
	char *st = s;

	while (*st != '\0')
	{
		st++;
		if (*st == c)
		{
			return (st);
		}
	}
	return ('\0');
}
