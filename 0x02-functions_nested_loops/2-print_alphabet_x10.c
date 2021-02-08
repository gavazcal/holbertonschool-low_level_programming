#include "holberton.h"
/**
 * print_alphabet_x10 - prints a-z ten times
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int LoopCount = 0;
	int AsciiVal;

	for (LoopCount = 0; LoopCount < 10; LoopCount++)
	{
		for (AsciiVal = 97; AsciiVal <= 122; AsciiVal++)
		{
			_putchar(AsciiVal);
		}
		_putchar('\n');
	}
}
