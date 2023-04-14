#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: a pointer to the newly allocated
 * space in memory, which contain s1 and the
 * first n bytes of s2
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len;
	char *str;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");

	len = strlen(s1) + strlen(s2) + 1;
	str = malloc(len * sizeof(char));

	if (str == NULL)
		return (NULL);

	strcat(str, s1);
	strncat(str, s2, n);
	return (str);
}
