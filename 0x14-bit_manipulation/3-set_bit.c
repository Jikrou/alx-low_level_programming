#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to
 * 1 at a given index
 * @n: a pointer to the bit set to 1
 * @index: is the index, starting from 0 to the bit you want to set
 * Return: 1if it work, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int sb;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	sb = (1 << index) | (*n);
	*n = sb;

	return (1);
}
