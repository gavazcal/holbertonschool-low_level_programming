#include "function_pointers.h"
#include "3-calc.h"
/**
 * main - prints the result of the called operation
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, y;

	int (*call)(int a, int b);

	call = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n"), exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);

	printf("%d\n", call(x, y));
	return (0);
}
