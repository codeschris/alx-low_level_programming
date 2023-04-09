#include "main.h"

/**
 * binary_to_uint - function converts binary number to unsigned int
 *
 * @b: ptr to str of binary characters
 *
 * Return: converted number, 0 if a char is not binary or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 1, result = 0, n = 0;

	if (b == NULL)
		return (0);

	while (b[n])
		n++;

	while (n)
	{
		if (b[n - 1] != '0' && b[n - 1] != '1')
			return (0);

		if (b[n - 1] == '1')
			result += a;
		a *= 2;
		n--;
	}
	return (result);
}
