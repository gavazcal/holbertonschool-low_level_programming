#include "holberton.h"
/**
 * main - prints the largest prime factor of a number
 * Return: always 0
 */
int main(void)
{
	long prime = 612852475143;
	long factor;

	factor = (prime / 2);
	while ((factor % 2) != 0)
	{
		factor = factor / 2;
	}
	printf("%ld\n", factor);
	return (0);
}
