#include "holberton.h"
/**
 * reverse_array - reverses an array of ints
 * @a: the array
 * @n: the number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int counter, value;

	for (counter = 0; counter < n; counter++)
	{
		n--;
		value = a[counter];
		a[counter] = a[n];
		a[n] = value;
	}

}
