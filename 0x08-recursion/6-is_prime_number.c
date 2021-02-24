#include "holberton.h"
/**
 * prime_checker - checks for prime numbers
 * @x: first digit
 * @y: second digit
 * Return: the value
 */
int prime_checker(int x, int y)
{
	if (x % y == 0 && y != (x / 2))
		return (0);
	else if (y >= (x / 2))
		return (1);
	else
		return (prime_checker(x, y + 1));
}


/**
 * is_prime_number - checks for prime numbers
 * @n: the number
 * Return: 1 if is prime, 0 otherwise
 */
int is_prime_number(int n)
{

	if (n > 1)
		return (prime_checker(n, 2));
	else
		return (0);
}
