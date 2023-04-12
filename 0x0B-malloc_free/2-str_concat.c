#include "main.h"
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer to the location of the two string
*/
char *str_concat(char *s1, char *s2)
{
	int len;
	char *a;

if (s1 == NULL)
	s1 = ("");
if (s2 == NULL)
	s2 = ("");


len = strlen(s1) + strlen(s2) + 1;
a = (char *)malloc(len *sizeof(char));

if (a == NULL)
	return (NULL);
strcat(a, s1);
strcat(a, s2);
	return (a);
}
