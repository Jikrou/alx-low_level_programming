#include "main.h"

/**
 * is_palindrome - a function that returns 1
 * if a string is a palindrome and 0 if not
 * @s: the string
 *
 * Return: an integer
 */

int is_palindrome(char *s)
{
        int length = _strlen_recursion(s);

        return (palindrome_recursion(s, 0, length - 1));
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
 * palindrome_recursion - is a function helper that checks if the
 * string s is a palindrome
 * @s: a pointer to the string
 * @b: the character in the beginning of the string
 * @e: the character in the end of the string
 *
 * Return: an integer
 */
int palindrome_recursion(char *s, int b, int e)
{
        if (b >= e)
        {
                return (1);
        }
        if (s[b] != s[e])
        {
                return (0);
        }
        return (palindrome_recursion(s, b + 1, e - 1));
}

