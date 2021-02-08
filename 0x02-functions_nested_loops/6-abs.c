#include "holberton.h"
/**
 * _abs - computes absolute value
 * @digit: the digit
 * Return: 0
 */
int _abs(int digit)
{
	if (digit < 0)
	{
		return (digit * (-1));
	}

	else
	{
		return (digit);
	}
}
