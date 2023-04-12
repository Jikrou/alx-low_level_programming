#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer to the location of the two string
*/
char *str_concat(char *s1, char *s2)
{
	int len = strlen(s1) + strlen(s2);
	char *a = (char *)malloc((len + 1) * sizeof(char));

if (s1 == NULL)
	return ("");
if (s2 == NULL)
	return ("");
if (a == NULL)
	return (NULL);
strcat(a, s1);
strcat(a, s2);
	return (a);
}
