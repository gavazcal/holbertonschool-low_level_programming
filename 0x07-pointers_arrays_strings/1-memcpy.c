#include "holberton.h"
/**
 * _memcpy - copies a memory area
 * @dest: destination
 * @src: source
 * @n: the amount of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_cpy = dest, *src_cpy = src;
	unsigned int idx;

	for (idx = 0; idx <= n; idx++)
	{
		dest_cpy[idx] = src_cpy[idx];
	}

	return (dest_cpy);
}
