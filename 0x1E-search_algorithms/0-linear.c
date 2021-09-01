#include <stdio.h>

/**
 * linear_search - searches in linear search algorithm for a value
 * @array: the elements to search through
 * @size: the number of elements in the array
 * @value: the element to search for
 * Return: index of value
 */

int linear_search(int *array, size_t size, int value)
{
	int idx, size_in_int;

	size_in_int = size;

	for (idx = 0; idx < size_in_int; idx++)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
