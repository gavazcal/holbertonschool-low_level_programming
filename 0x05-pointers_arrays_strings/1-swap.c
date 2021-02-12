#include "holberton.h"
/**
 * swap_int - swaps the value of two ints
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*b = *a;
	*b = c;
}
