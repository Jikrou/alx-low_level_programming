#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: number to set the bit to 1 from
 * @index: the number the bit you want to set
 * Return: 1 if it worked, or -1 if an error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	s = (1 << index) | (*n);
	*n = s;

	return (1);
}
