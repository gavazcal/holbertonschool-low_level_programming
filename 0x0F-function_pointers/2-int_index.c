#include "function_pointers.h"
/**
 * int_index - searches for an int
 * @array: the array
 * @size: the size
 * @cmp: points to the function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}
