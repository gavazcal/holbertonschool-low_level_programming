#include "holberton.h"

/**
 * palindrome_checker_a - auxiliary function
 * @s: string
 * Return: int
 */
int palindrome_checker_a(char *s)
{
	int checker;

	checker = 0;
	if (*s != 0)
	{
		checker++;
		return (checker + palindrome_checker_a(s + 1));
	}
	return (checker);
}
/**
 * palindrome_checker_b - auxiliary function
 * @s: string
 * @checker: counter
 * Return: int
 */
int palindrome_checker_b(char *s, int checker)
{
	if (checker <= 1)
		return (1);
	if (*s != s[checker - 1])
		return (0);
	else
		return (palindrome_checker_b((s + 1), (checker - 2)));
}

/**
 * is_palindrome - checks for palindromes
 * @s: the string to check
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int checker;

	checker = palindrome_checker_a(s);
	if (checker <= 1)
		return (1);
	return (palindrome_checker_b(s, checker));
}
