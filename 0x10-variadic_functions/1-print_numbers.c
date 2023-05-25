#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints all of the numbers
 * @separator: the string separator
 * @n: number of elements
 *
 * Return: always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list input;

	va_start(input, n); /* variable arguments start */

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(input, int));

			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
	}

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(input, int));
		}
		printf("\n");
	}
	va_end(input);
}
