#include "search_algos.h"

/**
 * binary_search - searches for a value using a binary search algorithm
 * @array: the array to search through
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: index of value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t center = size / 2;
	size_t begin = 0;
	size_t end = size - 1;
	size_t idx;

	if (array == NULL)
		return (-1);
	while (begin <= end)
	{
		printf("Searching in array: ");

		for (idx = begin; idx < end; idx++)
		{
			printf("%d, ", array[idx]);
		}
		printf("%d\n", array[idx]);
		center = (begin + end) / 2;
		if (array[center] < value)
			begin = center + 1;
		else if (array[center] > value)
			end = center - 1;
		else
			return (center);
	}
	return (-1);
}
