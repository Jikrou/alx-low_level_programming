#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s: the string
 * Return: integer the length
*/
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len = i + 1;
	}
	return (len);
}
