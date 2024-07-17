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



	while (array[h] < value && h < (int) size)
	{
		printf("Value checked array[%i] = [%i]\n", l, array[l]);
		l = h;
		h += m;
	}
	printf("Value checked array[%i] = [%i]\n", l, array[l]);
	if (h < (int) size)

		printf("Value checked array[%i] = [%i]\n", h, array[h]);
	printf("Value found between indexes [%i] and [%i]\n", l, h);

	h = (h < (int) size) ? h : (int) size - 1;
	for (; l <= h && h <= (int)size; l++)
	{
		printf("Value checked array[%i] = [%i]\n", l, array[l]);
		if (value == array[l])
			return (l);
	}
	return (-1);
}
