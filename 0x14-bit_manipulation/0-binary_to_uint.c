#include "main.h"

/**
 * binary_to_unit - a function that converts a binary number to
 * an unsigned int.
 * @b: a pointer to string of 0 and 1 chars
 * Return: the converted number or 0 otherwise
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int r = 0;
	int i, l;

	if (b == NULL)
		return (0);

	l = strlen(b);

	for (i = 0; i < l; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		r = r << '1';
		if (b[i] == '1')
			r = r | 1;
	}
	return (r);
}
