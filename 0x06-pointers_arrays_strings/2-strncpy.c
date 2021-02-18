#include "holberton.h"
#include <stdio.h>
/**
 * _strncpy - copies a string
 * @dest: the destination
 * @src: the source
 * @n: the amount of bytes
 */
char *_strncpy(char *dest, char *src, int n)
{
	int counter;

	for (counter = 0; counter < n && src[counter] != '\0'; counter++)
	{
		dest[counter] = src[counter];
	}
	if (counter < n)
	{
		dest[counter] = '\0';
	}
	return (dest);
}
