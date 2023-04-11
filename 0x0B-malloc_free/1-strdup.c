#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: the string
 * Return: a pointer to the duplicated string
*/
char *_strdup(char *str)
{
	int s;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	s = strlen(str) + 1;
	p = (char *)malloc(s * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	strcpy(p, str);
	return (p);
}
