#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	int AsciiVal = 0;

	for (AsciiVal = 97; AsciiVal <= 122; AsciiVal++)
	{
		putchar(AsciiVal);
	}
	putchar('\n');
	return (0);
}
