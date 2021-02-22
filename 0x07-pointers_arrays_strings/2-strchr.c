#include "holberton.h"
/**
 * _strchr - locates a char in a string
 * @s: the string
 * @c: the char
 * Return: a pointer to the first c
 */
char *_strchr(char *s, char c)
{
	unsigned int idx;

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		if (s[idx] == c)
		{
			return (&s[idx]);
		}
		else if (s[idx] == '\0')
		{
			return ('\0');
		}
	}
	if (c == '\0')
	{
		return (&s[idx]);
	}
	return (NULL);
}
