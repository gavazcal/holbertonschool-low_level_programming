#include "holberton.h"
/**
 * print_array - prints n elements of an array
 * @a: the array
 * @n: the number of elements to print
 */
void print_array(int *a, int n)
{
	int length;

	for (length = 0; length < n; length++)
	{
		printf("%d", a[length]);
		if (length != n - 1)
			printf(", ");
	}
	printf("\n");
}
