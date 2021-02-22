#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the substring
 * Return: number of bytes of s that consist of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int idx_s, idx_accept;

	for (idx_s = 0; s[idx_s] != '\0'; idx_s++)
	{
		for (idx_accept = 0; accept[idx_accept] != s[idx_s]; idx_accept++)
		{
			if (accept[idx_accept] == '\0')
			{
				return (idx_s);
			}
		}
	}
	return (idx_s);
}
