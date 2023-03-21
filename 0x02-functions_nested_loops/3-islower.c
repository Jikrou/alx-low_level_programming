#include "main.h"
/**
 * _islower - a function that checks if c is lowercase
 * @c: character to check
 *
 * Return: 1 if c is lowercase and 0 otherwise
*/
int _islower(int c)
{

	if (c >= 97)
	{
		return (1);
	}
	else if (c < 97)
	{
		return (0);
	}
	return (0);
}
