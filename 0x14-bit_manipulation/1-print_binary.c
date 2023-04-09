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
	unsigned int max = 0x01;

	max = n >> max;

	if (max == 0 && n == 0)
	{
		_putchar('0');
		return;
	}

	if (max != 0)
		print_binary(max);
	_putchar((n & 1) + '0');
}
