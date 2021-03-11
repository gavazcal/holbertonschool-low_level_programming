#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int idx;
	char *string_ptr;

	va_start(strings, n);

	for (idx = 0; idx < n; idx++)
	{
		string_ptr = va_arg(strings, char *);

		if (string_ptr == NULL)
			printf("(nil)");
		else
			printf("%s", string_ptr);

		if (separator && idx != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);

}
