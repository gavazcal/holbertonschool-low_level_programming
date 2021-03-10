#include "function_pointers.h"

/**
 * array_iterator - iterates a function
 * @array: array
 * @size: size
 * @action: points to the function iterated
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array == NULL || action == NULL)
		return;

	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
