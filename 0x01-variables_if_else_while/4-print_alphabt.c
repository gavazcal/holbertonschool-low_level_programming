#include <stdio.h>
/**
 * main - prints a-z -q -e
 * Return: 0
 */
int main(void)
{
	int AsciiVal;

	for (AsciiVal = 97; AsciiVal < 123; AsciiVal++)
	{
		if ((AsciiVal != 101) && (AsciiVal != 113))
		{
			putchar(AsciiVal);
		}
	}
	putchar('\n');
	return (0);
}
