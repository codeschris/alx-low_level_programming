#include "main.h"

/**
 * _pow_recursion - function retruns x raised to the
 * power of y
 *
 * @x: input integer
 * @y: input integer acting as power
 *
 * Return: result of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x <= 0 && x > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
