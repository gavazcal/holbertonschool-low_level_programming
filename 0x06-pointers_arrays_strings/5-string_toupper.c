#include "holberton.h"
/**
 * string_toupper - changes lowercase to uppercase
 * @s: the string
 * Return: str
 */
char *string_toupper(char *s)
{
	int counter;

	while (s[counter] != '\0')
	{
		if (s[counter] <= 122 && s[counter] >= 97)
		{
			s[counter] -= 32;
		}
		counter++;
	}
	return (s);
}
