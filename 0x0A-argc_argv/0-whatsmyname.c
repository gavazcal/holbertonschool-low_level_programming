#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: arg count
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int argc_counter = 0;

	if (argc_counter < argc)
	{
		printf("%s\n", argv[argc_counter]);
	}
	return (0);
}
