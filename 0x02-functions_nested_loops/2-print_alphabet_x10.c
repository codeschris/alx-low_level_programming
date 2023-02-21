#include "main.h"

/**
 * print_alphabet_x10 - Check description
 *
 * Description - prints all alphabets ten times
 *
 * Return: Nothing
 */

void print_alphabet_x1i0(void)
{
	char i;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
