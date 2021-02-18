#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @dest: the string to write to
 * @src: the string to copy from
 * @n: the amount of bytes to copy
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_idx, src_idx;

	for (dest_idx = 0; dest[dest_idx] != '\0'; dest_idx++)
	{
		;
	}
	for (src_idx = 0; src_idx < n && src[src_idx] != '\0'; src_idx++)
	{
		dest[dest_idx + src_idx] = src[src_idx];
	}

	dest[dest_idx + src_idx] = '\0';
	return (dest);
}
