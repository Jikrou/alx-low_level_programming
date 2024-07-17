#include "search_algos.h"
/**
 * jump_search - a function that search for a value in a sorted array
 * of integers using jump search
 * @array: a pointer to the first element in the array to seaarch for
 * @size: the nuber of the elements in the array
 * @value: is the value to search for
 * Return: the index where the value is located
*/
int jump_search(int *array, size_t size, int value)
{
	int l = 0;
	int m = (int) sqrt(size);
	int h = m;

	if (array == NULL || size == 0)
		return (-1);



	while (array[h] < value && l < (int) size)
	{
		l = h;
		h += m;
		if (h > (int) size - 1)
			h = (int) size;
	}
	printf("Value checked array[%i] = [%i]\n", l, array[l]);
	printf("Value checked array[%i] = [%i]\n", h, array[h]);
	printf("Value found between indexes [%i] and [%i]\n", l, h);
	for (; l <= h; l++)
	{
		if (value == array[l])
		{
			printf("Value checked array[%i] = [%i]\n", l, array[l]);
			return (l);
		}
		else
			printf("Value checked array[%i] = [%i]\n", l, array[l]);
	}
	return (-1);
}
