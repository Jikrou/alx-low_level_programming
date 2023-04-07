#include "main.h"
/**
 * wildcmp - compares two strings and returns 1 if the strings
 * can be considered identical, other wise return 0. s2 can
 * contain the special character * which can replace any
 * string including an empty string.
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 *
 * Return: an integer
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (wildcmp(s1, s2 + 1));
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 2) || wildcmp(s1 + 1, s2));
	return (0);
}
