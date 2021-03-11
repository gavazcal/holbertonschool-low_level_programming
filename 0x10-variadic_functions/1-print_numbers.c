#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: the number of ints passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int idx;

	va_start(numbers, n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", va_arg(numbers, int));

		if (separator && (idx != (n - 1)))
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
