#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: the constant byte
 * @n: the amount of bytes of memory area to fill
 * Return: a pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx;
	char *cpy = s, content = b;

	for (idx = 0; idx < n; idx++)
	{
		cpy[idx] = content;
	}

	return (cpy);
}
