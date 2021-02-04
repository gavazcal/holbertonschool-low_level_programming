#include <stdio.h>
/**
 * main - prints all possible combinations of two digits
 * Return: 0
 */
int main(void)
{
	int OnesPlace;
	int TensPlace;

	for (TensPlace = '0'; TensPlace < '9'; TensPlace++)
	{
		for (OnesPlace = '0'; OnesPlace <= '9'; OnesPlace++)
		{
			if (TensPlace < OnesPlace)
			{
				putchar(TensPlace);
				putchar(OnesPlace);
				if (TensPlace != '8' || OnesPlace != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
