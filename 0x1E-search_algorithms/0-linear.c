#include "search_algos.h"
/**
 * linear_search - a function that searches for a value in an array
 * of integers using the linear search algorithm
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in the array.
 * @value: the value to search for.
 * Return: the first index where the value is located in success,
 * -1 if failed.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;


	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] != value)
		{
			printf("Value checked array[%li] = [%i]\n", i, array[i]);
		}
		else
		{
			printf("Value checked array[%li] = [%i]\n", i, array[i]);
			return (i);
		}
	}
	return (-1);
}
