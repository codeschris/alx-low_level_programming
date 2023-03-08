#include "main.h"

/**
 * factorial - function returns factorial
 * of a given number
 *
 * @n: input integer
 *
 * Return: factorial of the number
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
