#include "main.h"
/**
 * _strpbrk - a function that searches a string
 * for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: a pointer
*/
char *_strpbrk(char *s, char *accept)
{
	char *st, *sr;

	for (st = s; *st != '\0'; st++)
	{
		for (sr = accept; *sr != '\0'; sr++)
		{
			if (*st == *sr)
			{
				return (st);
			}
		}
	}
	return ('\0');
}
