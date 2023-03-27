#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: integer1
 * @b: integer2
 * return: no value
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

