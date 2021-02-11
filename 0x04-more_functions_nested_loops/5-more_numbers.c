#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * Return: always 0
 */
void more_numbers(void)
{
	int counter, digit;

	for (counter = 0; counter <= 14; counter++)
	{
		for (digit = 0; digit <= 14; digit++)
		{
			if (digit >= 10)
			{
				_putchar(digit / 10 + '0');
			}
			_putchar(digit % 10 + '0');
		}
		_putchar('\n');
	}
}
