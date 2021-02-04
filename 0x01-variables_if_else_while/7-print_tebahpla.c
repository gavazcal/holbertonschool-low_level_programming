#include <stdio.h>
/**
 * main - prints z-a
 * Return: 0
 */
int main(void)
{
	int AsciiVal;

	for (AsciiVal = 122; AsciiVal >= 97; AsciiVal--)
	{
		putchar(AsciiVal);
	}
	putchar('\n');
	return (0);
}
