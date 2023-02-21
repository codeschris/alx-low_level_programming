#include "main.h"

/**
 * print_sign - Check Description
 * @n: input character
 *
 * Description: Function prints the sign of a given number
 * Return: 1 and prints + if value is positive, 0 is value is zero
 * and -1 and prints - if value is less than zero
 */

int print_sign(int n)
{
	int val;

	if (n > 0)
	{
		val = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		val = 0;
		_putchar('0');
	}
	else
	{
		val = -1;
		_putchar('-');
	}
	return (val);
}
