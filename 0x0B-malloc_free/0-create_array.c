#include "holberton.h"
/**
 * create_array - creates array of chars, initialized with a char
 * @size: size of array
 * @c: the char to initialize with
 * Return: Null or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int size_copy = 0;

	if (size == 0)
		return (NULL);
		buffer = malloc(sizeof(char) * size);
	if (buffer == NULL)
	{
		free(buffer);
		return (NULL);
	}
	while (size_copy < size)
	{
		buffer[size_copy] = c;
		size_copy++;
	}
	return (buffer);
}
