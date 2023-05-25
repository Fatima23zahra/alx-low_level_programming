#include "variadic_functions.h"

/**
 * print_strings - print strings with separator
 * @separator: the string separator
 * @n: the number of strings to print
 *
 * return: always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	const char *str = NULL;
	va_list args;

	va_start(args, n);
	if (!separator)
		separator = "";
	while (i--)
	{
		str = va_arg(args, const char *);
		printf("%s", str ? str : "(nil)");
		if (i)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
