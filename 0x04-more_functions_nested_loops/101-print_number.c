#include "holberton.h"
/**
 * print_number - prints an in
 * @n: the int
 * Return: Always 0
 */
void print_number(int n)
{
	unsigned int copy_n;

	if (n < 0)
	{
		_putchar('-');
		copy_n = -n;
	}
	else
		copy_n = n;
	if (copy_n / 10 != 0)
	{
		print_number(copy_n / 10);
	}

	_putchar(copy_n % 10 + '0');
}
