#include "main.h"
/**
 * _strstr - a function thzt locates a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the beginning of the located
 * substring, or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	char *hay, *ned, *mtc;

	for (hay = haystack; hay != '\0'; hay++)
	{
		if (*hay == *needle)
		{
			mtc = hay;
			ned = needle;

		while (*ned != '\0' && *hay == *ned)
		{
			hay++;
			ned++;
		}
		if (*ned == '\0')
		{
			return (mtc);
		}
		else
		{
			hay = mtc;
		}
		}
	}
	return ('\0');
}

