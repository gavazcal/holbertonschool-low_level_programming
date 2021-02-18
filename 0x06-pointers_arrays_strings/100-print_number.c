#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: the integer
 */
void print_number(int n)
{
	unsigned int copy;

	if (n < 0)
	{
		_putchar('-');
		copy = -n;
	}
	else
	{
		copy = n;
	}
	if (copy / 10)
	{
		print_number(copy / 10);
	}
	_putchar(copy % 10 + 48);
}
