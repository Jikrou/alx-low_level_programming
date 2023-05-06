#include "main.h"
/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: number to be compared
 * @m: number to be compared
 * Return: number of bits to be fliped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int fp;
	unsigned int cm = 0;

	fp = n ^ m;
	while (fp)
	{
		cm += fp & 1;
		fp >>= 1;
	}
	return (cm);
}
