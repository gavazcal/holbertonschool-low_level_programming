#include "holberton.h"
/**
 * print_line - prints a straight line
 * @n: the length of the line
 */
void print_line(int n)
{
	int length;

	length = n;

	if (length > 0)
	{
		for (length = 1; length <= n; length++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
