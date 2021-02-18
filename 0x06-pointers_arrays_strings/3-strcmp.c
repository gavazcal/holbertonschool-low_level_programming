#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if equal, int difference otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int counter;

	for (counter = 0; s1[counter] != '\0'; counter++)
	{
		;
	}
	for (; s2[counter] != '\0'; counter++)
	{
		;
	}
	return (*s1 - *s2);
}
