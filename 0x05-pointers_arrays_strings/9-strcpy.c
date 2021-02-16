#include "holberton.h"
/**
 * _strcpy - copies a string
 * @dest: the copied string
 * @src: the string to copy
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index;
	char str_cpy;

	for (index = 0; src[index] != '\0'; index++)
	{
		str_cpy = src[index];
		dest[index] = str_cpy;
	}
	dest[index] = '\0';
	return (dest);
}
