#include "holberton.h"
/**
 * _isupper - checks for uppercase chars
 * @c: the char to check
 * Return: 1 if success, 0 if fail
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
