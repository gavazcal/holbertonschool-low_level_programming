#include "holberton.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: the length
 */
void print_diagonal(int n)
{
	int length, width;

	length = n;
	if (length > 0)
	{
		for (length = 1; length <= n; length++)
		{
			for (width = 1; width <= n; width++)
			{
				if (length == width)
				{
				_putchar(92);
				break;
				}
				_putchar(32);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
