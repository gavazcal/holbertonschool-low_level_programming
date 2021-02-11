#include "holberton.h"
/**
 * print_square - prints a square
 * @size: size of the square
 */
void print_square(int size)
{
	int width, length;

	width = size;
	length = width;
	if (size > 0)
	{
		for (width = 1; width <= size; width++)
		{
			for (length = 1; length <= size; length++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
