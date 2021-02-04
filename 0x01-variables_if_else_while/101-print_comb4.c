#include <stdio.h>
/**
 * main - prints all combinations of 3 digits
 * Return: 0
 */
int main(void)
{
	int HunnidsDigit;
	int TensDigit;
	int OnesDigit;

	for (HunnidsDigit = '0'; HunnidsDigit <= '7'; HunnidsDigit++)
	{
		for (TensDigit = '0'; TensDigit <= '8'; TensDigit++)
		{
			for (OnesDigit = '0'; OnesDigit <= '9'; OnesDigit++)
			{
				if ((HunnidsDigit < TensDigit) && (TensDigit < OnesDigit))
				{
					putchar(HunnidsDigit);
					putchar(TensDigit);
					putchar(OnesDigit);
					if (HunnidsDigit != '7' || TensDigit != '8' || OnesDigit != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
