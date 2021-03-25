#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;

	if (b == NULL)
	{
		return (0);
	}

	else
	{
		while (*b)
		{
			if (*b == '1')
			{
				converted = ((converted * 2) + 1);
			}
			else if (*b == '0')
			{
				converted =  (converted * 2);
			}
			else
			{
				return (0);
			}
			b++;
		}
	}
	return (converted);
}
