#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the arg count
 * @argc: arg count
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
