#include <stdio.h>
/**
 * main - prints 00 to 99
 * Return: 0
 */
int main(void)
{
	int TensDigits;
	int OnesDigits;

	for (TensDigits = '0'; TensDigits <= '9'; TensDigits++)
	{
		for (OnesDigits = '0'; OnesDigits <= '9'; OnesDigits++)
		{
			putchar(TensDigits);
			putchar(OnesDigits);
			if (TensDigits != '9' || OnesDigits != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
