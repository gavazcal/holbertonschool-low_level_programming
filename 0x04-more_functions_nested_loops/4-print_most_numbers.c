#include "holberton.h"
/**
 * print_most_numbers - prints 0 to 9 except 2 and 4
 * Return: always 0
 */
void print_most_numbers(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (digit != '2' && digit != '4')
		{
			_putchar(digit);
		}
	}
	_putchar('\n');
}
