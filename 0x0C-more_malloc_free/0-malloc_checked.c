#include "holberton.h"
/**
 * malloc_checked - allocates memory with malloc
 * @b: the size to be created
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	if (b == 0)
		exit(98);

	mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
