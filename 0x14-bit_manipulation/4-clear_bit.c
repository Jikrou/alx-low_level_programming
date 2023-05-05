#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: the number to set the bit from
 * @index: the number to set the bit at
 * Return: 1 if it worked, or -1 if an error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	s = ~(1 << index);
	*n &= s;

	return (1);
}
