#include "holberton.h"
/**
 * main - prints 1-100 with fizz for multiples of 3, buzz for multiples of 5
 * and fizzbuzz for multiples of both
 * Return: always 0
 */
int main(void)
{
	int counter;

	for (counter = 1; counter <= 100; counter++)
	{
		if (counter % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (counter % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (counter % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", counter);
		}
	}
	printf("\n");
	return (0);
}
