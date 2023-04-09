#include "main.h"

/**
 * get_bit - function gets bits at given index
 *
 * @n: input int
 * @index: index of required bit
 *
 * Return: val of the bit, -1 otherwise
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if ((n & max))
		return (1);
	else
		return (0);
}
