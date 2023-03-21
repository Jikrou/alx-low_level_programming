#include "main.h"
/**
 * _abs - give the absolute value
 * @r: the number to compute the absolute value
 * Return: 0 (success)
*/
int _abs(int r)
{

	if (r < 0)
	{
		return (r * -1);
	}
	else
	{
		return (r);
	}
	return (0);
}
