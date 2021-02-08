#include "holberton.h"
/**
 * jack_bauer - prints every minute
 * Return: nothing
 */
void jack_bauer(void)
{
	int TensHours, Hours, TensMinutes, Minutes;

	for (TensHours = 0; TensHours <= 2; TensHours++)
	{
		for (Hours = 0; Hours <= 9; Hours++)
		{
			_putchar(TensHours);
			_putchar(Hours);
			_putchar(':');
			if (TensHours == 2 && Hours == 4)
				break;
			for (TensMinutes = 0; TensMinutes <= 5; TensMinutes++)
			{
				for (Minutes = 0; Minutes <= 9; Minutes++)
				{
					_putchar(TensHours + '0');
					_putchar(Hours + '0');
					_putchar(':');
					_putchar(TensMinutes + '0');
					_putchar(Minutes + '0');
					_putchar('\n');
				}
			}
		}
	}
}
