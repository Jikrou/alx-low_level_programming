#include "main.h"
/**
 * reverse_array - a function that reverse the content
 * of an array of integers
 * @a: array of integers
 * @n: length
*/
void reverse_array(int *a, int n)
{
	int i, srv;

	for (i = i / 2; i < n; i++)
	{
		srv = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = srv;
	}
}


