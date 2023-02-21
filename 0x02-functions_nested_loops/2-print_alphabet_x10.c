#include "main.h"

/**
 * print_alphabet_x10 - Check description
 *
 * Description - prints all alphabets ten times
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	char i;
	int n = 10;

	while (n < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
