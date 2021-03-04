#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory with malloc
 * @b: the size to be created
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
	{
		free(memory);
		exit(98);
	}
	return (memory);
}
