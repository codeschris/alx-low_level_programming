#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char name[8] = "_putchar";
	int n;

	for (n = 0; n < 8; n++)
		_putchar(name[n]);
	_putchar('\n');

	return (0);
}
