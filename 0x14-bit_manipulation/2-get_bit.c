#include "main.h"

/**
 * get_bit - a function that returns the value of a bit
 * at a given index.
 * @n: number to retrieve the bit from
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
