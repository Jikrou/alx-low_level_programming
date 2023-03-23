#include "main.h"
/**
 * _isdigit - print 1 if the character c is digit.
 * @c: the character to check.
 *
 * Return: 0 (Success).
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
