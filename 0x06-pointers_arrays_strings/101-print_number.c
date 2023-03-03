#include "main.h"
#include <stdio.h>

/**
 * print_number - function prints an integer
 *
 * @n: input integer
 *
 * Return: nothing
 */

void print_number(int n)
{
	int p;
	int neg;

	neg = 0;
	p = 1;

	if (n < 0)
	{
		_putchar('-');
		neg = 1;
	}

	while (p > 0)
	{
		if (p > 9)
		{
			if (!neg)
				_putchar((n / p % 10) + '0');
			else
				_putchar((n / p % 10) * -1 + '0');

			p /= 10;
		}

		if (p == 1)
		{
			if (neg)
				_putchar((n % 10) * -1 + '0');
			else
				_putchar(n % 10 + '0');
			p = 0;
		}
	}
}
