#include "holberton.h"
/**
 * string_toupper - changes lowercase to uppercase
 * @s: the string
 * Return: str
 */
char *string_toupper(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
		if (s[counter] <= 122 && s[counter] >= 97)
		{
			s[counter] -= 32;
		}
	}
	return (s);
}
