#include "holberton.h"
/**
 * root - arithmetic function
 * @n: factor n
 * @math: factor math
 * Return: the square root
 */
int root(int n, int math)
{
	if (n == 1 || n == 0)
		return (n);
	else if (math * math == n)
		return (math);
	else if (math * math > n)
		return (-1);
	return (root(n, math + 1));
}
/**
 * _sqrt_recursion - returns the natuiral square root
 * @n: the number
 * Return: n
 */
int _sqrt_recursion(int n)
{
	return (root(n, 0));
}

