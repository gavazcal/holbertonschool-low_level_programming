#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack: the place to look for a substring
 * @needle: the substring
 * Return: a pointer to the beginning of needle
 */
char *_strstr(char *haystack, char *needle)
{
	int idx = 0, idx_two = 0;

	if (*needle == '\0' || *needle == 0)
	{
		return (haystack);
	}
	for (idx = 0; haystack[idx] != '\0'; idx++)
	{
		for (idx_two = 0; haystack[idx + idx_two] == needle[idx_two]; idx_two++)
		{
			if (needle[idx_two] == '\0')
				return (&haystack[idx]);
		}
	}
	return ('\0');
}
