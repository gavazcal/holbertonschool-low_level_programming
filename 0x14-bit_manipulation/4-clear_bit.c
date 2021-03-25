#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the bit
 * @index: the index
 * Return: 1 if success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_set = 1;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	bit_set = bit_set << index;
	*n = *n & ~bit_set;
	return (1);
}
