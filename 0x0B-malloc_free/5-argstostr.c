#include "holberton.h"
/**
 * argstostr - concatenates all args
 * @ac: arg count
 * @av: the args
 * Return: pointer to new string or NULL
 */
char *argstostr(int ac, char **av)
{
	char *pointer, *pointer_2;
	int index_a, index_b, counter = 0;

	if (ac == 0 || av == NULL)
	{
		return ('\0');
	}

	for (index_a = 0; index_a < ac; index_a++)
	{
		for (index_b = 0; av[index_a][index_b] != '\0'; index_b++)
		{
			counter++;
		}
		counter++;
	}
	counter += 1;

	pointer = malloc(sizeof(char) * counter);
	pointer_2 = pointer;
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (index_a = 0; index_a < ac; index_a++)
	{
		for (index_b = 0; av[index_a][index_b] != '\0'; index_b++)
		{
			*pointer = av[index_a][index_b];
			pointer++;
		}
		*pointer = '\n';
		pointer++;
	}
	return (pointer_2);
}
