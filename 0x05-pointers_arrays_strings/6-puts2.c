#include "holberton.h"
/**
 * puts2 - prints every other character of a string
 * @str: the string
 */
void puts2(char *str)
{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		if (idx % 2 == 0)
		{
			_putchar(str[idx]);
		}
	}
	_putchar('\n');
}
