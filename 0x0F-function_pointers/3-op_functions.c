#include "function_pointers.h"
#include "3-calc.h"
/**
 * op_add - sums two ints
 * @a: int one
 * @b: int two
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two ints
 * @a: int one
 * @b: int two
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two ints
 * @a: int one
 * @b: int two
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two ints
 * @a: int one
 * @b: int two
 * Return: result
 */
int op_div(int a, int b)
{
	if (b <= 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mods two ints
 * @a: int one
 * @b: int two
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b <= 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
