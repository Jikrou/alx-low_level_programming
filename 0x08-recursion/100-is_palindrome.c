#include "main.h"

int _palindrome_recursion(char *s, int b, int e);
int _strlen_recursion(char *s);

/**
 * is_palindrome - a function that returns 1
 * if a string is a palindrome and 0 if not
 * @s: the string
 * Return: an integer
 */

int is_palindrome(char *s)
{
int e = _strlen_recursion(s);

if (*s == 0)
{
return (1);
}
return (_palindrome_recursion(s, 0, e - 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: a pointer to the string
 *
 * Return: an integer
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}

/**
 * _palindrome_recursion - is a function helper that checks if the
 * string s is a palindrome
 * @s: a pointer to the string
 * @b: the beginning of the string
 * @e: the end of the string
 *
 * Return: an integer
 */
int _palindrome_recursion(char *s, int b, int e)
{
	
if (b >= e)
return (1);

if (*(s + b) != *(s + e))
return (0);

return (_palindrome_recursion(s, b + 1, e - 1));
}

