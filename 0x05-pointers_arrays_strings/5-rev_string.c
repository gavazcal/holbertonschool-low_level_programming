#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: the string
 */
void rev_string(char *s)
{
	char *strcpy;
	int counter, rev_counter;

	for (counter = 0; s[counter] != '\0'; counter++)
		;
	for (rev_counter = (counter - 1); rev_counter >= (counter / 2); rev_counter--)
	{
		strcpy = s[counter];
		s[counter] = strcpy[rev_counter];
		s[rev_counter] = strcpy;
	}

}
