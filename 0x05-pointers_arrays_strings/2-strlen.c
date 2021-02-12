#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: an int
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
	;
	}
	return (counter);
}
