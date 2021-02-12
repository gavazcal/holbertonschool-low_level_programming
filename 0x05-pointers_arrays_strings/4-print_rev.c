#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	int str_count, rev_count;

	for (str_count = 0; s[str_count] != '\0'; str_count++)
		;
	for (rev_count = (str_count - 1); rev_count >= 0; rev_count--)
	{
		_putchar(s[rev_count]);
	}
	_putchar('\n');
}
