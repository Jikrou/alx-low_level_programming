#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a:  */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum0 = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum0 += *(a + i * size +j);
			}
			if (i == size - j - 1)
			{
				sum1 += *(a + i * size + j);
			}
		}
	}
	printf("%d, ", sum0);
	printf("%d\n", sum1);
}
