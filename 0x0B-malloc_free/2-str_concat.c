#include "holberton.h"
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: null if nothing is passed, pointer to new string otherwise
 */
char *str_concat(char *s1, char *s2)
{
	int str1_len, str2_len, cpy_1, cpy_2;
	char *str_concat;

	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);

	for (str1_len = 0; s1[str1_len] != '\0'; str1_len++)
		;
	for (str2_len = 0; s2[str2_len] != '\0'; str2_len++)
		;
	str_concat = malloc(sizeof(char) * (str1_len + str2_len + 1));
	if (str_concat == NULL)
	{
		return (NULL);
	}
	for (cpy_1 = 0; cpy_1 < str1_len; cpy_1++)
	{
		str_concat[cpy_1] = s1[cpy_1];
	}
	for (cpy_2 = 0; cpy_1 < (str1_len + str2_len); cpy_1++, cpy_2++)
	{
		str_concat[cpy_1] = s2[cpy_2];
	}
	str_concat[cpy_1] = '\0';

	return (str_concat);
}
