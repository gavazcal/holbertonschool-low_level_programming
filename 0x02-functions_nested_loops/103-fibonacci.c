#include "holberton.h"
/**
 * main - prints the sum of even fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long int counter;
	long int first_digit = 1;
	long int second_digit = 2;
	long int fibonacci = 3;

	counter = second_digit;

	while (fibonacci < 4000000)
	{
		fibonacci = first_digit + second_digit;
		first_digit = second_digit;
		second_digit = fibonacci;
		if ((second_digit < 4000000) && (second_digit % 2 == 0))
			counter += second_digit;
	}
	printf("%lu\n", fibonacci);
	return (0);
}
