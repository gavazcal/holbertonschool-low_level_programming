#include "holberton.h"
/**
 * get_endianess - checks for the endianness
 * Return: 0 big endian, 1 for little
 */
int get_endianness(void)
{
	unsigned int check = 1;

	return ((int) (((char *)&check)[0]));
}
