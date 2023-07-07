#include "main.h"

/**
 * flip_bits -  a function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: the number to be fliped
 * @m: the number to be flipped to
 * Return: the number of bits to be flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int f;
	unsigned int c = 0;

	f = n ^ m;
	while (f)
	{
		c += f & 1;
		f >>= 1;
	}
	return (c);
}
