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
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
				if (width < size - height -1)
				{
					_putchar(32);
				}
				else
					_putchar(35);
			}
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
