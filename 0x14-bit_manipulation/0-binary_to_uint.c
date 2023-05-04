#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointer to a string
 * Return: the converted number, or 0 if it failed
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;
	int i, lon;

	if (b == NULL)
		return (0);

	lon = strlen(b);
	for (i = 0; i < lon; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		conv = conv << 1;
		if (b[i] == '1')
			conv = conv | 1;
	}

	return (conv);
}
