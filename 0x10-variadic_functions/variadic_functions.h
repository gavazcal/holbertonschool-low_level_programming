#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/*LIBRARIES*/
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct type_fmt - formats struct
 * @type: format
 * @f: function
 */
typedef struct type_print
{
	char *types;
	void (*pointer)(va_list);
} type_print_t;

/*PROTOTYPES*/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
#endif
