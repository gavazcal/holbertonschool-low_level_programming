#include "holberton.h"
/**
 * print_alphabet - prints a-z
 * Return: 0
 */
void print_alphabet(void)
{
	int AsciiVal;

	for (AsciiVal = 97; AsciiVal <= 122; AsciiVal++)
	{
		_putchar(AsciiVal);
	}
	_putchar('\n');
}
