#include <stdio.h>
/**
 * main - prints a-z and A-Z
 * Return: 0
 */
int main(void)
{
	int AsciiVal;

	for (AsciiVal = 97; AsciiVal <= 122; AsciiVal++)
	{
		putchar(AsciiVal);
	}
	for (AsciiVal = 65; AsciiVal <= 90; AsciiVal++)
	{
		putchar(AsciiVal);
	}
	putchar('\n');
	return (0);
}
