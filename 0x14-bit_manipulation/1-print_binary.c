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
	unsigned int st = 0, max = 32768;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (max)
	{
		if (st == 1 && (n & max) == 0)
			_putchar('0');
		else if ((n & max) != 0)
		{
			_putchar('1');
			st = 1;
		}
		max >>= 1;
	}

}
