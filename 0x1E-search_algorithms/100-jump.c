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
	size_t l = 0;
	size_t m = (size_t)sqrt(size);
	size_t h = m;

	if (array == NULL || size == 0)
		return (-1);



	printf("Value checked array[%li] = [%i]\n", l, array[l]);
	if (array[l] == value)
		return ((int)l);

	while (h < size && array[h] < value)
	{
		printf("Value checked array[%li] = [%i]\n", h, array[h]);
		l = h;
		h += m;
	}

	printf("Value found between indexes [%li] and [%li]\n", l, h);

	if (h >= size)
		h = size - 1;

	for (; l <= h && l < size; l++)
	{
		printf("Value checked array[%li] = [%i]\n", l, array[l]);
		if (value == array[l])
			return ((int)l);
	}
	return (-1);
}
