#include "holberton.h"
/**
 * _puts - prints a string
 * @str: the string
 */
void _puts(char *str)
{
	int str_count;

	for (str_count = 0; str[str_count] != '\0'; str_count++)
	{
		_putchar(str[str_count]);
	}
	_putchar('\n');
}
