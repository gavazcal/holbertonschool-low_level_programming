#include <stdio.h>
/**
 * main - prints all digits 0-10
 * Return: 0
 */
int main(void)
{
	int digit = '0';

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
