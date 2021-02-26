#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds the arguments in argv
 * @argc: count of arguments
 * @argv: array of strings
 * Return: 0 upon success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	char *str_cpy;
	int result = 0, add_A, add_B, is_int;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (add_A = 1; add_A < argc; add_A++)
	{
		str_cpy = argv[add_A];


		for (add_B = 0; str_cpy[add_B] != '\0'; add_B++)
		{
			is_int = isdigit(str_cpy[add_B]);

			if (is_int == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(str_cpy);
	}
	printf("%d\n", result);

	return (0);
}
