#include "main.h"

/**
 * flip_bits - function returns no. of bits needed to flip
 *
 * @n: start point
 * @m: end point
 *
 * Return: no. of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	unsigned long int exor = (n ^ m);

	while (exor)
	{
		flip += exor & 1;
		exor >>= 1;
	}
	return (flip);
}
