#include "main.h"

/**
 * print_binary - function prints binary number of given value
 *
 * @n: unsigned integer to convert
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
