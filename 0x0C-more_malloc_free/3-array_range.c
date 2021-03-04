#include "holberton.h"
/**
 * array_range - creates an array of integers
 * @min: the minimum value
 * @max: The max value
 * Return: the pointer to the new array
 */
int *array_range(int min, int max)
{
	int *array;
	int idx;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * ((max - min) + 1));
	if (array == NULL)
		return (NULL);

	for (idx = 0; min <= max; idx++, min++)
		array[idx] = min;
	return (array);

}
