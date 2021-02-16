#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int length, half;

	for (length = 0; str[length] != '\0'; length++)
	{
	;
	}
	length += 1;

	for (half = (length / 2); str[half] != '\0'; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
