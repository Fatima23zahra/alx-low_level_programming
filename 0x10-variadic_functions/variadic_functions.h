#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct print_fn - a struct print_fn
 *
 * @format: the format specifier
 * @fn: the print function
 *
 */
typedef struct print_fn
{
	char format;
	int (*fn)(va_list);
} print_fn_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
