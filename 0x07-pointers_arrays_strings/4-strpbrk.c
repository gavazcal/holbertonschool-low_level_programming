#include "holberton.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: the string
 * @accept: the bytes to check for
 * Return: a pointer to the bytes in s that match accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int idx, idx_accept;

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		for (idx_accept = 0; accept[idx_accept] != '\0'; idx_accept++)
		{
			if (s[idx] == accept[idx_accept])
			{
				s = &s[idx];
				return (s);
			}
		}
	}
	return (0);
}
