#include "holberton.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: the size in bytes of s2 to concatenate to s1
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatted;
	unsigned int s1_len = 0, s2_len = 0, s1_idx = 0, s2_idx = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	if (n >= s2_len)
	{
		n = s2_len;
	}
	concatted = malloc(s1_len + n + 1);

	if (concatted == NULL)
	{
		return (NULL);
	}
	for (s1_idx = 0; s1_idx < s1_len; s1_idx++)
	{
		concatted[s1_idx] = s1[s1_idx];
	}
	for (s2_len = 0; s2_idx < n; s2_idx++)
	{
		concatted[s1_idx + s2_idx] = s2[s2_idx];
	}
	concatted[s1_idx + s2_idx] = '\0';
	return (concatted);
}
