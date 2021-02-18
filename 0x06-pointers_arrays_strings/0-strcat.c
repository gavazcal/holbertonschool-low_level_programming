#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: the concatenating string
 * @src: the concatenated string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int src_index, dest_index;

	for (dest_index = 0; dest[dest_index] != '\0'; dest_index++)
	{
		;
	}
	for (src_index = 0; src[src_index] != '\0'; src_index++)
	{
		dest[dest_index] = src[src_index];
		dest_index++;
	}
	dest[dest_index] = '\0';
	return (dest);
}
