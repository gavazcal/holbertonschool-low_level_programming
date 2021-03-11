#include "variadic_functions.h"

/**
 * sum_them_all - sums all parameters
 * @n: the number of params
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int result = 0;
	unsigned int idx;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (idx = 0; idx < n; idx++)
	{
		result += va_arg(args, int);
	}
	va_end(args);

	return (result);
}
