#include "holberton.h"
/**
 * print_numbers - prints 0 to 9
 * Return: Always 0
 */
void print_numbers(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		_putchar(digit);
	}
	_putchar('\n');
}
