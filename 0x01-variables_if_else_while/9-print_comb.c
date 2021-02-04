#include <stdio.h>
/**
 * main - prints all combinations of 0-9
 * Return: 0
 */
int main(void)
{
	int digitVals;

	for (digitVals = '0'; digitVals <= '9'; digitVals++)
	{
		putchar(digitVals);
		if (digitVals < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
