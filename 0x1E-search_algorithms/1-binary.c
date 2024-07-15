#include "search_algos.h"
/**
 * binary_search - a function that searches for a value in a sorted array of
 * integers using the binary search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 * Return: the index where the value is located on success,
 * -1 on failure
*/
int binary_search(int *array, size_t size, int value)
{
	int i = 0;
	int m = 0;
	int l = 0;
	int r = (int) size - 1;


	if (array == NULL || size == 0)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r + 1; i++)
		{
			printf("%i", array[i]);
			if (i < r)
				printf(", ");
		}
		printf("\n");

		m = l + (r - l) / 2;

		if (value > array[m])
			l = m + 1;
		else if (value < array[m])
			r = m - 1;
		else
			return (m);
	}

	return (-1);
}
