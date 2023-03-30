#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: pointer
 * @s2: pointer
 * Return: integer (Success)
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 > *s2)
		{
			return (15);
		}
		else if (*s1 < *s2)
		{
			return (-15);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
