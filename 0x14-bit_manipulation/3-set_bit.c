#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the bit
 * @index: the index
 * Return: 1 if success, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num_set = 1;

	if (index > (sizeof(index) * 8))
	{
		return (-1);
	}
	num_set = num_set << index;
	if ((num_set & *n) == 0)
	{
		*n += num_set;
	}
	return (1);
}
