#include "main.h"

/**
 * clear_bit - function sets bit to 0 at given index
 *
 * @n: number to set
 * @index: index of bit to change
 *
 * Return: 1 Success, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max = ~(max << index);
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= max;
	return (1);
}
