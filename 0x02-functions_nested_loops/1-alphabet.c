#include "main.h"

/**
 * print_alphabet - Check description
 *
 * Description: It prints the alphabet in lowercase followed by a newline
 *
 * Return: Nothing
 */

void print_alphabet(void)
{
	char start;

	for (start = 'a'; start <= 'z'; start++)
		_putchar(start);
	_putchar('\n');
}
