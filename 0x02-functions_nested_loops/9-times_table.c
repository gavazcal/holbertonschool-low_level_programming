#include "holberton.h"
/**
 * times_table - prints the 9 times table
 * Return: nothing
 */
void times_table(void)
{
	int x, y, result, first_digit, second_digit;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			result = (x * y);
			if (y > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result >= 10 && result < 100)
				{
					first_digit = result / 10;
					second_digit = result % 10;
					_putchar('0' + first_digit);
					_putchar('0' + second_digit);
				}
				else if (result < 10)
				{
					_putchar(' ');
					_putchar('0' + result);
				}
			}
			else
			{
				_putchar(result + '0');
			}
		}
	_putchar('\n');
	}
}
