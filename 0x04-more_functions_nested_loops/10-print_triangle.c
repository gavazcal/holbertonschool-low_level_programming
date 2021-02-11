#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int height, width;

	if (size > 0)
	{
		for (height = 1; height <= size; height++)
		{
			for (width = (size - 1); width >= 1; width--)
			{
				_putchar(32);
			}
		_putchar(35);
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
