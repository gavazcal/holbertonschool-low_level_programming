#include "variadic_functions.h"
/**
 * char_thing - prints the char things
 * @args: how many char things
 */
void char_thing(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * int_thing - prints int things
 * @args: how many int things
 */
void int_thing(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * string_thing - prints string things
 * @args: how many string things
 */
void string_thing(va_list args)
{
	char *points = va_arg(args, char *);

	if (points == NULL)
		points = "(nil)";
	printf("%s", points);
}
/**
 * float_thing - prints a floaty thing
 * @flowy: how many floaty things
 */
void float_thing(va_list flowy)
{
	printf("%f", va_arg(flowy, double));
}
/**
 * print_all - prints anything
 * @format: types of args
 */
void print_all(const char * const format, ...)
{
	type_print_t arg_type[] = {
		{"c", char_thing},
		{"i", int_thing},
		{"s", string_thing},
		{"f", float_thing},
		{NULL, NULL}
	};

	int i = 0, j;
	char *separator = "";
	va_list args;

	va_start(args, format);

	while (format && format[j])
	{
		i = 0;

		while (arg_type[i].pointer != NULL)
		{
			if (arg_type[i].types[0] == format[j])
			{
				printf("%s", separator);
				arg_type[i].pointer(args);
				separator = ", ";
				break;
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(args);
}
