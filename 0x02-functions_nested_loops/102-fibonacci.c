#include "holberton.h"
/**
 * main - prints first 50 fibonacci nums
 * Return: 0
 */
int main(void)
{
	int counter;
	long int first_digit = 1;
	long int second_digit = 2;
	long int fibonacci;

	printf("1, 2, ");

	for (counter = 3; counter <= 50; counter++)
	{
		fibonacci = first_digit + second_digit;
		first_digit = second_digit;
		second_digit = fibonacci;
		printf("%ld", fibonacci);
		if (counter < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}

