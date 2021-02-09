#include "holberton.h"
/**
 * main - computes and prints the sum of multiples of 3 or 5 below 1024
 * Return: void
 */
int main(void)
{
	int count, sum;

	for (count = 0; count < 1024; count++)
	{
		if ((count % 3 == 0) || (count % 5 == 0))
			sum += count;
	}
	printf("%d\n", sum);
	return (0);
}
