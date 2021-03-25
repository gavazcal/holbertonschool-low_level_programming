#include "holberton.h"
/**
 * flip_bits - returns the number of bits you would need to flip to
 * get from one num to another
 * @n: one number
 * @m: another
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;

	for (n = n ^ m; n > 0; n >>= 1)
	{
		if (n & 1)
		{
			counter++;
		}
	}
	return (counter);
}
