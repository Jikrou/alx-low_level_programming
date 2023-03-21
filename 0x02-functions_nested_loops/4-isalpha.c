#include "main.h"
/**
 * _isalpha - A function that check if c is an alphabetic
 * character or not
 * @c: the character to check
 * Return: 0 if it's an alphabetic
 * character and 1 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
