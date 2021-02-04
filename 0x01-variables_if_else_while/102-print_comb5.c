#include <stdio.h>
/**
 * main - prints all combinations of 2 2-digit #s
 * Return: 0
 */
int main(void)
{
	int firstnumber;
	int secondnumber;

	for (firstnumber = 0; firstnumber <= 98; firstnumber++)
	{
		for (secondnumber = firstnumber + 1; secondnumber <= 99; secondnumber++)
		{
			putchar((firstnumber / 10) + '0');
			putchar((firstnumber % 10) + '0');
			putchar(' ');
			putchar((secondnumber / 10) + '0');
			putchar((secondnumber % 10) + '0');
			if ((firstnumber == 98) && (secondnumber == 99))
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
