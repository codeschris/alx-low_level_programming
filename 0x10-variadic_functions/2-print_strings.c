#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function prints string followed by a newline
 *
 * @separator: input strings separating vals
 * @n: number of parameters
 * @..: other parameters
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argsp;
	unsigned int i = 0;
	char *str;

	va_start(argsp, n);
	for (; i < n; i++)
	{
		str = va_arg(argsp, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(argsp);
}
