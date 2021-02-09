#include "holberton.h"
/**
 * jack_bauer - prints every minute
 * Return: nothing
 */
void jack_bauer(void)
{
	int Hours, Minutes;

	for (Hours = 0; Hours <= 23; Hours++)
	{
		for (Minutes = 0; Minutes <= 59; Minutes++)
		{
			_putchar(Hours / 10 + '0');
			_putchar(Hours % 10 + '0');
			_putchar(':');
			_putchar(Minutes / 10 + '0');
			_putchar(Minutes % 10 + '0');
			_putchar('\n');
		}
	}
}
