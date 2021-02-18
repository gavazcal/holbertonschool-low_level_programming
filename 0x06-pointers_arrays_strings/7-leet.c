#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @s: the string
 * Return: s
 */
char *leet(char *s)
{
	int counter_1, counter_2;

	char not_leet[] = "aeotlAEOTL";
	char leet_af[] = "4307143071";

	for (counter_1 = 0; s[counter_1] != '\0'; counter_1++)
	{
		for (counter_2 = 0; not_leet[counter_2] != '\0'; counter_2++)
		{
			if (s[counter_1] == not_leet[counter_2])
				s[counter_1] = leet_af[counter_2];
		}
	}
	return (s);
}
