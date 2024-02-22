#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: pointer to the number to set the bit from
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it work or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int sb;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	sb = ~(1 << index);
	*n &= sb;

	return (1);
}
