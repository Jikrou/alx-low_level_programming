#include "main.h"
/**
 * string_toupper - a fuction that changes all the
 * lowercase letters of a string to uppercase
 * @st: string
 * Return: a character
*/
char *string_toupper(char *st)
{
	char *ptr = st;

	while (*st != '\0')
	{
		if (*st >= 'a' && *st <= 'z')
		{
			*st = *st - 32;
		}
		st++;
	}
	return (ptr);
}

