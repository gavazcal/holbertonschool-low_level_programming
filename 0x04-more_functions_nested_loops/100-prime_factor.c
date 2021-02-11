#include "holberton.h"
/**
 * main - prints the largest prime factor of a number
 * Return: always 0
 */
int main(void)
{
	long prime = 612852475143;
	long factor;

	for (factor = 2; factor <= prime; factor++)
	{
		if (prime % factor == 0)
		{
			prime = prime / factor;
			factor--;
		}
	}
	printf("%ld\n", factor);
	return (0);
}
