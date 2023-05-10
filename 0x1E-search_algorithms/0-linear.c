#include "search_algos.h"
/**
 * linear_search - a function that performs linear search algorithm
 *
 * @array: pointer to the first element
 * @size: number of element on the array
 * @value: item to be searched for in the array
 *
 * Return: returns index of value else -1 if array is Null
 *
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
