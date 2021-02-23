#include "holberton.h"
/**
 * print_diagsums - prints the sum of two diagonal matrix indeces
 * @a: the array
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int idx, factor_1 = 0, factor_2 = 0;

	for (idx = 0; idx < size; idx++)
	{
		factor_1 += a[((size + 1) * idx)];
		factor_2 += a[((size - 1) * (idx + 1))];
	}
	printf("%d, %d\n", factor_1, factor_2);
}
