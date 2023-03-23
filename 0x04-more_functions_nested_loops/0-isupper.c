#include "main.h"
/**
 * _isupper - print 1 if the character c is uppercase.
 * @c: the character to check if isupper.
 *
 *  Return: 0 (success).
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
