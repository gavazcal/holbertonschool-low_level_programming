#include <stdio.h>
/**
 * main - prints single digit nums 0-9
 * Return: 0
 */

int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		printf("%d", digit);
	}
	putchar('\n');
	return (0);
}
