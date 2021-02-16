#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: the string
 */
void rev_string(char *s)
{
	char strcpy;
	int counter, rev_counter, index = 0;

	for (counter = 0; s[counter] != '\0'; counter++)
		;

	for (rev_counter = (counter - 1); rev_counter > index; rev_counter--)
	{
		strcpy = *(s + index);
		*(s + index) = *(s + rev_counter);
		*(s + rev_counter) = strcpy;
		index++;
	}
}
