#include <stdio.h>
/**
 * main - prints a-z and A-Z
 * Return: 0
 */
int main(void)
{
	int AsciiVal;

	for (AsciiVal = 0; AsciiVal <= 122; AsciiVal++)
	{
		if ((AsciiVal >= 97) && (AsciiVal <= 122))
		{
			putchar(AsciiVal);
		}
			else if ((AsciiVal >= 65) && (AsciiVal <= 90))
			{
				putchar(AsciiVal);
			}
	}
	putchar('\n');

	return (0);
}
