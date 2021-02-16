#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int length_of_the_string, half_length;

	for (length_of_the_string = 0; str[length_of_the_string] != '\0'; length_of_the_string++)
	{
	;
	}
	length_of_the_string += 1;

	for (half_length = length_of_the_string / 2; str[half_length] != '\0'; half_length++)
	{
		_putchar(str[half_length]);
	}
	_putchar('\n');
}
