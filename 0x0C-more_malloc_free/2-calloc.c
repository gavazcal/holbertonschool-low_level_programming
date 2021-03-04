#include "holberton.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size in bytes
 * Return: pointer to the memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int idx, array;
	char *new_mem;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	new_mem = malloc(nmemb * size);

	if (new_mem == NULL)
		return (NULL);

	array = nmemb * size;
	for (idx = 0; idx < array; idx++)
	{
		new_mem[idx] = 0;
	}
	return (new_mem);

}
