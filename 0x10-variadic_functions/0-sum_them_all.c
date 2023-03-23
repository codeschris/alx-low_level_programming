#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function sums all parameters
 *
 * @n: number of parameters
 * @...: other parameters
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argsp;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(argsp, n);
	for (; i < n; i++)
		sum += va_arg(argsp, int);

	va_end(argsp);
	return (sum);
}
