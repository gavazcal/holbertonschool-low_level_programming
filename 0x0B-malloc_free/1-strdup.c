#include "holberton.h"
/**
 * _strdup - creates a space in memory with a copy of a string
 * @str: the string
 * Return: NULL if no string is passed, pointer to the copy otherwise
 */
char *_strdup(char *str)
{
	char *str_cpy;
	int str_len = 0, str_cpy_len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (str_len = 0; str[str_len] != '\0'; str_len++)
		;

	str_cpy = malloc(sizeof(*str_cpy) * str_len + 1);

	if (str_cpy == NULL)
	{
		free(str_cpy);
		return (NULL);
	}
	for (str_cpy_len = 0; str_cpy_len < str_len; str_cpy_len++)
	{
		str_cpy[str_cpy_len] = str[str_cpy_len];
	}
	return (str_cpy);
}
