#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function prints numbers followed by newline
 *
 * @separator: input string separating numbers
 * @n: number of parameters
 * @...: other parameters
 *
 * Return: all numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argsp;
	unsigned int i = 0;
	int vals;

	va_start(argsp, n);
	for (; i < n; i++)
	{
		vals = va_arg(argsp, int);
		printf("%d", vals);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(argsp);
}
