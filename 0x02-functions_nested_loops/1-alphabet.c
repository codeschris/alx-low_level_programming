#include "main.h"

/**
 * main - Entry point 
 *
 * Include all prototypes inside of main.h either before continuing or after creating a file
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char start;

	for (start = 'a'; start <= 'z'; start++)
		_putchar(start);
	_putchar('\n');

	return (0);
}
