#include "main.h"

/**
 * set_bit - function set bit at given index to 1
 *
 * @n: number to set bit
 * @index: index of bit to change
 *
 * Return: 1 Success, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);
	*n |= max;
	return (1);
}
