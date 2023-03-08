#include "main.h"

/**
 * is_prime_number - function returns 1 if input
 * is prime number
 *
 * @n: input integer
 *
 * Return: 1 if prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_div(n, div));
}

/**
 * is_div - function checks divisibility
 * @num: input int
 * @div: result of division
 *
 * Return: 1 if num is divisible, o otherwise
 */

int is_div(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_div(num, div + 1));
}
