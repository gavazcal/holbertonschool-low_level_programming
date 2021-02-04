#include <stdio.h>
/**
 * main - prints base 16 numbers
 * Return: 0
 */
int main(void)
{
	int digitVals;
	int AsciiVals;

	for (digitVals = '0'; digitVals <= '9'; digitVals++)
		putchar(digitVals);
	for (AsciiVals = 97; AsciiVals <= 102; AsciiVals++)
		putchar(AsciiVals);
	putchar('\n');
	return (0);
}
